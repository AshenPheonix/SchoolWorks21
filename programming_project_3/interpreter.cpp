#include "interpreter.h"

Command::Command(string newLine)
{
    command=(char)newLine[0];
    if(newLine.length()==2)
    {
        data=0;
        return;
    }
    
    string substring(newLine.substr(1));
    
    stringstream temp(substring);
	temp.exceptions(ios_base::failbit);


    try
    {
        temp >> data;
    }
    catch(ios_base::failure f)
    {
        data=0;
    }
}

Interpreter::Interpreter(string newFile)
:File(newFile), working(NULL)
{//left blank on purpose
}


Interpreter::~Interpreter()
{
    delete working;
}


void Interpreter::createList()
{
    if(working == NULL)
        working=new DList;
    else
    {
        delete working;
        working=new DList;
    }
}

void Interpreter::exec()
{
    fstream fout(File.c_str());
    if(!(fout.is_open()))
    {
        cout << "File load error." << endl;
        return;
    }
    
    string temp;
    while(getline(fout, temp))
    {
        Command newCommand(temp);

        switch (newCommand.command)
        {
            case 'C':
                //create
                createList();
                cout << "LIST CREATED"<<endl;
                break;
            case 'X':
                if(working!=NULL)
                {
                    working->emptyList();
                    cout << "LIST CLEARED" << endl;
                }
                else
                {
                    cout << "MUST CREATE LIST INSTANCE" << endl;
                }
                //clear List
                break;
            case 'D':
                if(working==NULL)
                    cout << "MUST CREATE LIST INSTANCE" << endl;
                else
                {
                    delete working;
                    working=NULL;
                    cout << "LIST DELETED" << endl;
                }
                //delete a list
                break;
            case 'I':
                if(working==NULL)
                    cout << "MUST CREATE LIST INSTANCE" << endl;
                else
                {
                    working->sortedInsert(newCommand.data);
                     cout << "VALUE "<< newCommand.data << " INSERTED"<< endl;
                }
                //sorted insert
                break;
            case 'F':
                if(working==NULL)
                    cout << "MUST CREATE LIST INSTANCE" << endl;
                else
                {
                    working->insertHead(newCommand.data);
                    cout << "VALUE "<< working->getHead() << " ADDED TO HEAD" << endl;
                }
                //insert front
                break;
            case 'B':
                if(working==NULL)
                    cout << "MUST CREATE LIST INSTANCE" << endl;
                else
                {
                    working->insertTail(newCommand.data);
                    cout << "VALUE "<< working->getTail() <<" ADDED TO TAIL"<< endl;
                }
                //insert back
                break;
            case 'A':
                if(working==NULL)
                    cout << "MUST CREATE LIST INSTANCE" << endl;
                else if(working->getHeadNode()==NULL)
                {
                    cout << "LIST EMPTY" << endl;
                }
                else
                {
                    cout << "VALUE " << working->getHead() << " AT HEAD" << endl;
                }
                //get head
                break;
            case 'Z':
                //getTail
                if(working==NULL)
                    cout << "MUST CREATE LIST INSTANCE" << endl;
                else if(working->getTailNode()==NULL)
                {
                    cout << "LIST EMPTY" << endl;
                }
                else
                {
                     cout << "VALUE "<< working->getTail() <<" AT TAIL" << endl;
                }
                break;
            case 'T':
                //kill head
                if(working==NULL)
                    cout << "MUST CREATE LIST INSTANCE" << endl;
                else if(working->getHeadNode()==NULL)
                {
                    cout << "LIST EMPTY" << endl;
                }
                else
                {
                    working->killHead();
                    cout <<  "REMOVED HEAD" <<endl;
                }
                break;
            case 'K':
                if(working==NULL)
                    cout << "MUST CREATE LIST INSTANCE" << endl;
                else if(working->getTailNode()==NULL)
                {
                    cout << "LIST EMPTY" << endl;
                }
                else
                {
                    working->killTail();
                    cout << "REMOVED TAIL" << endl;
                }
                //kill tail
                break;
            case 'E':
                if(working==NULL)
                    cout << "MUST CREATE LIST INSTANCE" << endl;
                else if(working->removeInstances(newCommand.data))
                        cout << "VALUE "<< newCommand.data <<" ELIMINATED" << endl;
                else
                        cout <<  "VALUE "<< newCommand.data << " NOT FOUND" << endl;
                //eliminate all from list
                break;
            case 'R':
                if(working==NULL)
                    cout << "MUST CREATE LIST INSTANCE" << endl;
                else if(working->removeFirst(newCommand.data))
                    cout << "VALUE " << newCommand.data << " REMOVED" << endl;
                else
                    cout << "VALUE "<< newCommand.data <<" NOT FOUND" << endl;
                //remove single
                break;
            case 'N':
                if(working==NULL)
                    cout << "MUST CREATE LIST INSTANCE" << endl;
                else
                {
                    working->getNodes();
                }
                //get size
                break;
            case 'G':
                if(working==NULL)
                    cout << "MUST CREATE LIST INSTANCE" << endl;
                else if(working->getData(newCommand.data))
                    cout << "VALUE " << newCommand.data << " FOUND" << endl;
                else
                    cout << "VALUE "<< newCommand.data <<" NOT FOUND" << endl;
                //get number
                break;
            case 'P':
                if(working==NULL)
                    cout << "MUST CREATE LIST INSTANCE" << endl;
                else
                {
                    working->printAll();
                }
                //print all
                break;
            case '#':
                //ignored on purpose;
                break;
        }
    }
    
    fout.close();
}
