#include "interpreter.h"


Command::Command(string nextLine){
    command=nextLine[0];
    
    if(nextLine.length()==1)
        data="";
    else{
        stringstream temp(nextLine.substr(2));
        temp >> data;
        for(unsigned int i(0); i<data.length(); ++i){
            data[i]=tolower(data[i]);
        }
    }
}

Interpreter::Interpreter(string download)
    :tree(NULL)
{
    file.open(download.c_str());
    if(file.bad()){
        cerr<< "File Not Loaded";
        exit(1);
    }
}

Interpreter::~Interpreter(){
    if (tree!=NULL)
        tree->clear();
}

void Interpreter::createTree(){
    if(tree!=NULL)
        delete tree;
        
    tree = new BSTree<Word>;
}

void Interpreter::getSize(){
    if(tree!=NULL)
        cout << tree->Size() << endl;
    else
        cout << "MUST CREATE TREE INSTANCE" << endl;
}

void Interpreter::deleteTree(){
    if(tree!=NULL){
        delete tree;
        tree=NULL;
    }
    else
        cout << "MUST CREATE TREE INSTANCE" << endl;
}

void Interpreter::exec(){
    string input;
    
    if(file.bad()){
        cout << "FILE NOT LOADED" << endl;
        exit(1);
    }
    else{
        while(getline(file, input)){
            Command com(input);
            switch(com.command){
            case 'C':
                //create
                createTree();
                cout << "TREE CREATED" << endl;
            break;
            case'X':
                //clear
                if(tree==NULL)
                    cout << "MUST CREATE TREE INSTANCE" << endl;
                else{
                    tree->clear();
                    cout << "TREE CLEARED" << endl;
                }
            break;
            case 'D':
                //delete
                if(tree==NULL)
                    cout << "MUST CREATE TREE INSTANCE" << endl;
                else{
                    deleteTree();
                    cout <<  "TREE DELETED" << endl;
                }
            break;
            case 'I':
                //insert
                if(tree==NULL)
                    cout << "MUST CREATE TREE INSTANCE" << endl;
                else if(tree->insert(com.data)){
                    cout <<  "WORD "; 
                    cout << com.data; 
                    cout << " INSERTED" << endl;
                }
                else{
                    cout <<  "WORD " << com.data << " INCREMENTED" << endl;
                    tree->get(com.data)->incrementCount();
                }
            break;
            case 'F':
                //find
                if(tree==NULL)
                    cout << "MUST CREATE TREE INSTANCE" << endl;
                else if(tree->Size()==0)
                    cout << "TREE EMPTY" << endl;
                else if(tree->get(com.data) !=NULL)
                    cout << *tree->get(com.data)<< " FOUND" << endl;
                else
                    cout << com.data <<" NOT FOUND" << endl;
            break;
            case 'R':
                //remove
                if(tree==NULL)
                    cout << "MUST CREATE TREE INSTANCE" << endl;
                else if(tree->Size()==0)
                    cout << "TREE EMPTY" << endl;
                else if(tree->remove(com.data))
                    cout << "REMOVED " << com.data << endl; 
                else
                    cout << com.data <<" NOT FOUND" << endl;
            break;
            case 'G':
                //get
                if(tree==NULL)
                    cout << "MUST CREATE TREE INSTANCE" << endl;
                else if(tree->Size()==0)
                    cout << "TREE EMPTY" << endl;
                else if(tree->get(com.data) !=NULL)
                    cout << tree->get(com.data);
                else
                    cout << com.command <<" NOT FOUND" << endl;
            break;
            case 'N':
                //number
                if(tree==NULL)
                    cout << "MUST CREATE TREE INSTANCE" << endl;
                else
                    cout <<  "TREE SIZE IS " << tree->Size() << endl;
            break;
            case 'O':
                //in order print
                if(tree==NULL)
                    cout << "MUST CREATE TREE INSTANCE" << endl;
                else{
                    tree->inOrder();
                    cout << endl;
                }
            break;
            case 'E':
                // in reverse print
                if(tree==NULL)
                    cout << "MUST CREATE TREE INSTANCE" << endl;
                else{
                    tree->reverseOrder();
                    cout << endl;
                }
            break;
            }
        }
    }
}
