#include "genetics.h"

gene::gene(string newTar)
    :target(newTar){
    srand(time(0));
    for(int i(0); i<POP_SIZE; ++i){
        population.push_back(randomWord());
        endOfLine().diff(devoid(endOfLine()));
    }
    deb.flip();
}

gene::~gene(){/*empty*/}

string gene::randomWord(){
    string returned;
    for(unsigned int i(0); i<target.length(); ++i){
        returned += (char)(rand()%128);
    }
    
    return returned;
}

void gene::mutate(pop& member){
    for(unsigned int i(0); i<member.value().length(); ++i){
        if(rand()%101 < Percent() && member[i]!=target[i]){
            member[i]=(char)(rand()%128);
        }
    }
    member.diff(devoid(member));
}

double gene::Percent(){
    return (POP_SIZE / MUTANT);
}

void gene::out(){
    for (int i(population.size()-1); i>=0; --i){
        cout << population[i].value() <<"  :  "<< population[i].diff() << endl;
    }
}

int gene::devoid(pop& member){
    unsigned int temp(0);
    for(unsigned int i(0); i<member.value().length(); ++i){
        temp += abs(((int)target[i] -(int)member[i]));
    }
    return temp;
}

pop& gene::endOfLine(){
    return population.back();
}

void gene::exec(char which){
    if(which=='n'){
        for(int i(0); i< MAX_RUNS; ++i){
            sort(population.begin(), population.end());
            
            out();
            
            if(target==population[0] && population[0].diff()==0){
                cout << "Success" << endl;
                return;
            }
            
            
            for(unsigned int i(population.size()*ELITES); i<population.size(); ++i){
                mutate(population[i]);
            }
        }
        cout << "Failed" << endl;
    }
    else{
        for(int i(0); i< MAX_RUNS; ++i){
            sort(population.begin(), population.end());
            
            graphicalOut();
            
            if(target==population[0] && population[0].diff()==0){
                cout << "Success" << endl;
                return;
            }
            
            
            for(unsigned int i(population.size()*ELITES); i<population.size(); ++i){
                mutate(population[i]);
            }
        }
        cout << "Failed" << endl;
    }
}

void gene::clearScreen()//basic clear screen for terminal use.
{
#ifdef WIN32// if a windows box.
	system("cls");// cls
#else //otherwise
	system("clear");//clear
#endif
}

void gene::graphicalOut(){
    clearScreen();
    cout << "Current String:\n  "   << population[0].value() << "  :  " << endl;
    cout << " [";
    if(population[0].diff()!=0){
        for(unsigned int i(0); i<target.length(); ++i){
            if(population[0].value()[i]==target[i])
                cout << "-";
        }
        for(unsigned int i(0); i<target.length(); ++i){
            if(population[0].value()[i]!=target[i])
                cout << " ";
        }
    }
    else{
        for(unsigned int i(0); i<target.length(); ++i){
            cout << "=";
        }
    }
    cout << "]";
}

/*gene(string);
virtual ~gene();

void mutate(pop&);
char age(char);

void exec();*/