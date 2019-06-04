/*
    
    Brandon Porter
    CSCI 21
    
    Started 2/19/2014
    Edited 2/26/2014

*/
#include "box.h"
#include "prizes.h"
#include "bstdlib.h"

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/* for unit testing -- do not alter */
template <typename X, typename A>
void btassert(A assertion);
void unittest ();

BStdLib bstd;

void boxCreate(vector<Box> &container);
void addPrize(Box& which);
void prizeRemove(Box& which);
void checkName(Box which);
void changeName(Box& which);
void checkColor(Box which);
void paintBox(Box& which);
void boxCapacity(Box which);
void prizeValue(Box which);
void killEverybody(vector<Box> container);


//int main (int argc, char* argv[])
int main()
{
    unittest();
	
    // CODE HERE -- INTERACTIVE TEST
    //
    // add additional functions as needed to support interactive test
    
    vector<Box> interactive;
    Box empty;
    interactive.push_back(empty);
    bool quit(false);
    bstd.stall();
    bstd.clearScreen();
    
    do
    {
        cout << "What would you like to do?\n"
                "1)  Create a box\n"
                "2)  Add a prize to a box\n"
                "3)  Remove a prize from a box\n"
                "4)  Check the name of a prize\n"
                "5)  Change the name of a prize\n"
                "6)  Check box color\n"
                "7)  Paint box\n"
                "8)  Get Box Capacity\n"
                "9)  Get Prize Value\n"
                "0)  Leave!"
                "\n"
                "What would you like to do?(int 0-9) :";
    
        unsigned int answer(bstd.checkInt(false));
        
        bstd.clearScreen();
        
        switch (answer)
        {
            case 1:
                boxCreate(interactive);
                break;
            case 2:
                if(interactive.size()==1)
                    addPrize(interactive[0]);
                else
                {
                    bool check(true);
                    while(check)
                    {
                        cout << "Which box would you like to edit? (integer) :";
                        answer=bstd.checkInt(false);
                        if(answer<=interactive.size())
                        {
                            cout << "Okay\n";
                            addPrize(interactive[answer-1]);
                            check = !check;
                        }
                        else
                        {
                            cout << "You haven't made that number of boxes yet.\n";
                        }
                    }
                }
                break;
            case 3:
                if(interactive.size()==1)
                    prizeRemove(interactive[0]);
                else
                {
                    bool check(true);
                    while(check)
                    {
                        cout << "Which box would you like to edit? (integer) :";
                        answer=bstd.checkInt(false);
                        if(answer<=interactive.size())
                        {
                            cout << "Okay\n";
                            prizeRemove(interactive[answer-1]);
                            check = !check;
                        }
                        else
                        {
                            cout << "You haven't made that number of boxes yet.\n";
                        }
                    }
                }
                break;
            case 4:
                if(interactive.size()==1)
                    checkName(interactive[0]);
                else
                {
                    bool check(true);
                    while(check)
                    {
                        cout << "Which box would you like to edit? (integer) :";
                        answer=bstd.checkInt(false);
                        if(answer<=interactive.size())
                        {
                            cout << "Okay\n";
                            checkName(interactive[answer-1]);
                            check = !check;
                        }
                        else
                        {
                            cout << "You haven't made that number of boxes yet.\n";
                        }
                    }
                }
                break;
            case 5:
                if(interactive.size()==1)
                    changeName(interactive[0]);
                else
                {
                    bool check(true);
                    while(check)
                    {
                        cout << "Which box would you like to edit? (integer) :";
                        answer=bstd.checkInt(false);
                        if(answer<=interactive.size())
                        {
                            cout << "Okay\n";
                            changeName(interactive[answer-1]);
                            check = !check;
                        }
                        else
                        {
                            cout << "You haven't made that number of boxes yet.\n";
                        }
                    }
                }
                break;
            case 6:
                if(interactive.size()==1)
                    checkColor(interactive[0]);
                else
                {
                    bool check(true);
                    while(check)
                    {
                        cout << "Which box would you like to edit? (integer) :";
                        answer=bstd.checkInt(false);
                        if(answer<=interactive.size())
                        {
                            cout << "Okay\n";
                            checkColor(interactive[answer-1]);
                            check = !check;
                        }
                        else
                        {
                            cout << "You haven't made that number of boxes yet.\n";
                        }
                    }
                }
                break;
            case 7:
                if(interactive.size()==1)
                    paintBox(interactive[0]);
                else
                {
                    bool check(true);
                    while(check)
                    {
                        cout << "Which box would you like to edit? (integer) :";
                        answer=bstd.checkInt(false);
                        if(answer<=interactive.size())
                        {
                            cout << "Okay\n";
                            paintBox(interactive[answer-1]);
                            check = !check;
                        }
                        else
                        {
                            cout << "You haven't made that number of boxes yet.\n";
                        }
                    }
                }
                break;
            case 8:
                if(interactive.size()==1)
                    boxCapacity(interactive[0]);
                else
                {
                    bool check(true);
                    while(check)
                    {
                        cout << "Which box would you like to edit? (integer) :";
                        answer=bstd.checkInt(false);
                        if(answer<=interactive.size())
                        {
                            cout << "Okay\n";
                            boxCapacity(interactive[answer-1]);
                            check = !check;
                        }
                        else
                        {
                            cout << "You haven't made that number of boxes yet.\n";
                        }
                    }
                }
                break;
            case 9:
                if(interactive.size()==1)
                    prizeValue(interactive[0]);
                else
                {
                    bool check(true);
                    while(check)
                    {
                        cout << "Which box would you like to edit? (integer) :";
                        answer=bstd.checkInt(false);
                        if(answer<=interactive.size())
                        {
                            cout << "Okay\n";
                            prizeValue(interactive[answer-1]);
                            check = !check;
                        }
                        else
                        {
                            cout << "You haven't made that number of boxes yet.\n";
                        }
                    }
                };
                break;
            case 0:
                cout << "Okay.\n";
                quit = true;
                break;
        }
        bstd.stall();
        bstd.clearScreen();
        
        quit=true;
    }while (!(quit));
    return 0;
}


void boxCreate(vector<Box> &container)
{
    cout << "Did you want to create a box (y or n): ";
    char answer = bstd.checkChar("yYnN");
    
    if (tolower(answer)=='n')
    {
        cout << "Sorry"<< endl;
    }
    else
    {
        bstd.clearScreen();
        cout << "How much capacity should the box have? (int > 0) :";
        unsigned int newCapacity = bstd.checkInt(false);
        
        cout << "What color should you paint the box? (string) :";
        string newColor = bstd.checkString();
        
        cout << "What Number should be on the box? (int) :";
        int newNumber = bstd.checkInt();
        
        if (newCapacity == 0)
        {
            cout << "You can't put anything in this box!";
        }
        else
        {
            Box newBox(newNumber, newColor, newCapacity);
            container.push_back(newBox);
            //newBox.Kill();
            cout << "Would you like to add something to your new box? (y or n) :";
            answer = bstd.checkChar("yYnN");
            
            if(tolower(answer) =='y')
            {
                addPrize(container.back());
                return;
            }
            
        }
    }
}


void addPrize(Box& which)
{
    if((which.getPrizeCapacity()-which.getPrizeCount())==0)
    {
        cout << "You can't put anything else in this box\n";
        return;
    }
    
    cout << "What would you like to add?\n"
            "Name (string) :";
    string name(bstd.checkString());
    
    Prize scratch;
    
    cout << "What would you like to set the value of that prize to? (int) :";
        unsigned int value(bstd.checkInt(false));
    
    for (unsigned int i(0); i<which.getPrizeCapacity(); i++)
    {
        if(which.getPrize(i) == scratch)
        {
            which.getPrize(i).setName(name);
            which.getPrize(i).setValue(value);
            break;
        }
    }
    
    bstd.stall();
    bstd.clearScreen();
    
    if((which.getPrizeCapacity()-which.getPrizeCount())==0)
    {
        cout << "This box is now full\n";
        return;
    }
    else
    {
        cout << "Would you like to add another? (y or n) : ";
        char ans(bstd.checkChar("yYnN"));
        
        if(tolower(ans)=='y')
            addPrize(which);
        else
        {
            cout << "Okay";
        }
    }
}

void prizeRemove(Box& which)
{
    if(which.getPrizeCount()==0)
    {
        cout << "No prizes to remove";
        return;
    }
    
    for (unsigned int i(0); i<which.getPrizeCount(); i++)
    {
        cout << (i+1) << ") " << which.getPrize(i).getName() << endl;
    }
    cout << "0) None\n"
         << "What do you want to kill/murder/have-sleep-with-the-fishes? (int) :";
    unsigned int answer(bstd.checkInt(false));
    answer--;
    
    if(answer>which.getPrizeCount())
    {
        cout << "Not a valid response" << endl;
        prizeRemove(which);
        return;
    }
    else
    {
        cout << "Klling " << which.getPrize(answer).getName() << "...";
        cout << "You now have a dead" << which.removePrize(answer).getName();
        return;
    }
}

void checkName(Box which)
{
    Prize scratch;
    
    for (unsigned int i(0); i<which.getPrizeCapacity(); i++)
    {
        if(which.getPrize(i)==scratch)
        {
            continue;
        }
        else
        {
            which.getPrize(i).getName();
        }
    }
}

void changeName(Box& which)
{
    for(unsigned int i(0); i<which.getPrizeCapacity(); i++)
    {
        cout << (i+1) <<") " << which.getPrize(i).getName() << endl;
    }
    cout << "0) Exit\n"
         << "What do you want to change? (int) :";
    unsigned int answer(bstd.checkInt(false));
    answer--;
    
    if (answer>=which.getPrizeCapacity())
    {
        cout << "You can't do that\n";
        bstd.stall();
        bstd.clearScreen();
        changeName(which);
    }
    else
    {
        cout << "What do you want to change the name to? (string):";
        string ans(bstd.checkString());
        if(ans=="")
            which.getPrize(answer).setName("no name");
        else
            which.getPrize(answer).setName(ans);
        
        cout << "Name Changed." << endl;
        cout << "Would you like to change another name? (y or n) :";
        char ans2(bstd.checkChar("yYnN"));
        if(tolower(ans2)=='y')
        {
            bstd.clearScreen();
            changeName(which);
        }
        else
        {
            return;
        }
    }
}

void checkColor(Box which)
{
    cout << "Box #" << which.getBoxNumber() << " is painted " << which.getBoxColor() << endl;
}

void paintBox(Box& which)
{
    checkColor(which);
    cout << "What color do you want to paint the box? (string) :";
    string answer(bstd.checkString());
    cout << "Did you want to paint the box " << answer << "? (y or n) :";
    
    if(tolower(bstd.checkChar("yYnN"))=='y')
    {
        cout << "Sorry\n";
        paintBox(which);
    }
    else
    {
        which.setBoxColor(answer);
        cout << "The box is now " << which.getBoxColor() << "." << endl;
    }
}

void boxCapacity(Box which)
{
    cout << "This box holds          :" << which.getPrizeCapacity() << "." << endl;
    cout << "It is currently holding :" << which.getPrizeCount() << "." << endl;
}

void prizeValue(Box which)
{
    Prize scratch;
    for(unsigned int i(0); i<which.getPrizeCapacity(); i++)
    {
        if(which.getPrize(i)==scratch)
        {
            continue;
        }
        else
        {
            cout << "Prize " << (i+1) << " is worth $" << which.getPrize(i).getValue()<< endl;
        }
    }
}

/*
 * Unit testing functionb1. Do not alter.
 */

void unittest ()
{
    cout << "\nSTARTING UNIT TEST\n\n";
	
    Box b1;
    Box b2(42, "blue", 3);
	
    cout << "** TESTING DEFAULT BOX **\n\n";
	
    try {
        btassert<bool>(b1.getBoxNumber() == 0);
        cout << "Passed TEST 1: Box getBoxNumber()\n";
    } catch (bool b) {
        cout << "# FAILED TEST 1 Box getBoxNumber() #\n";
    }
	
    try {
        btassert<bool>(b1.getBoxColor() == "NO COLOR");
        cout << "Passed TEST 2: Box getBoxColor()\n";
    } catch (bool b) {
        cout << "# FAILED TEST 2 Box getBoxColor() #\n";
    }
    
    try {
        btassert<bool>(b1.getPrizeCapacity() == 5);
        cout << "Passed TEST 3: Box getPrizeCapacity()\n";
    } catch (bool b) {
        cout << "# FAILED TEST 3 Box getPrizeCapacity() #\n";
    }
	
    try {
        btassert<bool>(b1.getPrizeCount() == 0);
        cout << "Passed TEST 4: Box getPrizeCount()\n";
    } catch (bool b) {
        cout << "# FAILED TEST 4 Box getPrizeCount() #\n";
    }
	
    b1.setBoxNumber(99);
    try {
        btassert<bool>(b1.getBoxNumber() == 99);
        cout << "Passed TEST 5: Box setBoxNumber()/getBoxNumber()\n";
    } catch (bool b) {
        cout << "# FAILED TEST 5 Box setBoxNumber()/getBoxNumber() #\n";
    }
	
    b1.setBoxColor("red");
    try {
        btassert<bool>(b1.getBoxColor() == "red");
        cout << "Passed TEST 6: Box setBoxColor()/getBoxColor()\n";
    } catch (bool b) {
        cout << "# FAILED TEST 6 Box setBoxColor()/getBoxColor() #\n";
    }
    
    cout << "\n** TESTING CUSTOM BOX **\n\n";
	
    try {
        btassert<bool>(b2.getBoxNumber() == 42);
        cout << "Passed TEST 7: Box getBoxNumber()\n";
    } catch (bool b) {
        cout << "# FAILED TEST 7 Box getBoxNumber() #\n";
    }
	
    try {
        btassert<bool>(b2.getBoxColor() == "blue");
        cout << "Passed TEST 8: Box getBoxColor()\n";
    } catch (bool b) {
        cout << "# FAILED TEST 8 Box getBoxColor() #\n";
    }
    
    try {
        btassert<bool>(b2.getPrizeCapacity() == 3);
        cout << "Passed TEST 9: Box getPrizeCapacity()\n";
    } catch (bool b) {
        cout << "# FAILED TEST 9 Box getPrizeCapacity() #\n";
    }
	
    try {
        btassert<bool>(b2.getPrizeCount() == 0);
        cout << "Passed TEST 10: Box getPrizeCount()\n";
    } catch (bool b) {
        cout << "# FAILED TEST 10 Box getPrizeCount() #\n";
    }
	
    try {
        btassert<bool>(b2.getPrize(0) == Prize());
        cout << "Passed TEST 11: Box getPrize(0)\n";
    } catch (bool b) {
        cout << "# FAILED TEST 11 Box getPrize(0) #\n";
    }
	
    try {
        btassert<bool>(b2.removePrize(0) == Prize());
        cout << "Passed TEST 12: Box removePrize(0)\n";
    } catch (bool b) {
        cout << "# FAILED TEST 12 Box removePrize(0) #\n";
    }
    
    b2.addPrize(Prize("BRONZE PRIZE", 1));
    try {
        btassert<bool>(b2.getPrizeCount() == 1);
        cout << "Passed TEST 13: Box addPrize()/getPrizeCount()\n";
    } catch (bool b) {
        cout << "# FAILED TEST 13 Box addPrize()/getPrizeCount() #\n";
    }
    
    b2.addPrize(Prize("SILVER PRIZE", 100));
    try {
        btassert<bool>(b2.getPrizeCount() == 2);
        cout << "Passed TEST 14: Box addPrize()/getPrizeCount()\n";
    } catch (bool b) {
        cout << "# FAILED TEST 14 Box addPrize()/getPrizeCount() #\n";
    }
        
    b2.addPrize(Prize("GOLD PRIZE", 1000));
    try {
        btassert<bool>(b2.getPrizeCount() == 3);
        cout << "Passed TEST 15: Box addPrize()/getPrizeCount()\n";
    } catch (bool b) {
        cout << "# FAILED TEST 15 Box addPrize()/getPrizeCount() #\n";
    }
    
    try {
        btassert<bool>(b2.addPrize(Prize("DIAMOND PRIZE", 999)) == false);
        cout << "Passed TEST 16: Box addPrize(ARRAY FULL)\n";
    } catch (bool b) {
        cout << "# FAILED TEST 16 Box addPrize(ARRAY FULL) #\n";
    }
	
    try {
        btassert<bool>(b2.getPrize(1) == Prize("SILVER PRIZE", 100));
        cout << "Passed TEST 17: Box getPrize(1)\n";
    } catch (bool b) {
        cout << "# FAILED TEST 17 Box getPrize(1) #\n";
    }
	
    try {
        btassert<bool>(b2.removePrize(2) == Prize("GOLD PRIZE", 1000));
        cout << "Passed TEST 18: Box removePrize(2)\n";
    } catch (bool b) {
        cout << "# FAILED TEST 18 Box removePrize(2) #\n";
    }
    
    try {
        btassert<bool>(b2.getPrizeCount() == 2);
        cout << "Passed TEST 19: Box getPrizeCount()\n";
    } catch (bool b) {
        cout << "# FAILED TEST 19 Box getPrizeCount() #\n";
    }
	
    try {
        btassert<bool>(b2.removePrize(2) == Prize());
        cout << "Passed TEST 20: Box removeCargo(2)\n";
    } catch (bool b) {
        cout << "# FAILED TEST 20 Box removeCargo(2) #\n";
    }
	
    try {
        btassert<bool>(b2.getPrize(2) == Prize());
        cout << "Passed TEST 21: Box getPrize(2)\n";
    } catch (bool b) {
        cout << "# FAILED TEST 21 Box getPrize(2) #\n";
    }
	
    try {
        btassert<bool>(b2.addPrize(Prize("RUBY PRIZE", 9999)) == true);
        cout << "Passed TEST 22: Box addPrize(\"RUBY PRIZE\", 9999)\n";
    } catch (bool b) {
        cout << "# FAILED TEST 22 Box addPrize(\"RUBY PRIZE\", 9999) #\n";
    }
    
    try {
        btassert<bool>(b2.getPrizeCount() == 3);
        cout << "Passed TEST 23: Box getPrizeCount()\n";
    } catch (bool b) {
        cout << "# FAILED TEST 23 Box getPrizeCount() #\n";
    }
	
    try {
        btassert<bool>(b2.getPrizeCapacity() == 3);
        cout << "Passed TEST 24: Box getPrizeCapacity()\n";
    } catch (bool b) {
        cout << "# FAILED TEST 24 Box getPrizeCapacity() #\n";
    }
	
    cout << "\n** TESTING PRIZE **\n\n";
	
    Prize p1;
	
    try {
        btassert<bool>(p1.getName() == "NO NAME");
        cout << "Passed TEST 25: Prize getPrizeName()\n";
    } catch (bool b) {
        cout << "# FAILED TEST 25 Prize getPrizeName() #\n";
    }
	
    try {
        btassert<bool>(p1.getValue() == 0);
        cout << "Passed TEST 26: Prize getPrizeValue()\n";
    } catch (bool b) {
        cout << "# FAILED TEST 26 Prize getPrizeValue() #\n";
    }
	
    p1.setName("FOOD PRIZE");
    try {
        btassert<bool>(p1.getName() == "FOOD PRIZE");
        cout << "Passed TEST 27: Prize setPrizeName(\"FOOD PRIZE\")/getPrizeName()\n";
    } catch (bool b) {
        cout << "# FAILED TEST 27 Prize setPrizeName(\"FOOD PRIZE\")/getPrizeName() #\n";
    }
	
    p1.setValue(17);
    try {
        btassert<bool>(p1.getValue() == 17);
        cout << "Passed TEST 28: Prize setPrizeValue(17)/getPrizeValue()\n";
    } catch (bool b) {
        cout << "# FAILED TEST 28 Prize setPrizeValue(17)/getPrizeValue() #\n";
    }
	
    Prize p2("HAT PRIZE", 50);
	
    try {
        btassert<bool>(p2.getName() == "HAT PRIZE");
        cout << "Passed TEST 29: Prize getPrizeName()\n";
    } catch (bool b) {
        cout << "# FAILED TEST 29 Prize getPrizeName() #\n";
    }
	
    try {
        btassert<bool>(p2.getValue() == 50);
        cout << "Passed TEST 30: Prize getPrizeValue()\n";
    } catch (bool b) {
        cout << "# FAILED TEST 30 Prize getPrizeValue() #\n";
    }
    
    try {
        btassert<bool>(!(p1 == p2));
        cout << "Passed TEST 31: !(Prize == Prize)\n";
    } catch (bool b) {
        cout << "# FAILED TEST 31 !(Prize == Prize) #\n";
    }
    
    p2.setName("FOOD PRIZE");
    try {
        btassert<bool>(p2.getName() == "FOOD PRIZE");
        cout << "Passed TEST 32: Prize setPrizeName(\"FOOD PRIZE\")/getPrizeName()\n";
    } catch (bool b) {
        cout << "# FAILED TEST 32 Prize setPrizeName(\"FOOD PRIZE\")/getPrizeName() #\n";
    }
	
    p2.setValue(17);
    try {
        btassert<bool>(p2.getValue() == 17);
        cout << "Passed TEST 33: Prize setPrizeValue(17)/getPrizeValue()\n";
    } catch (bool b) {
        cout << "# FAILED TEST 33 Prize setPrizeValue(17)/getPrizeValue() #\n";
    }
    
    try {
        btassert<bool>(p1 == p2);
        cout << "Passed TEST 34: (Prize == Prize)\n";
    } catch (bool b) {
        cout << "# FAILED TEST 34 (Prize == Prize) #\n";
    }
    
    p2.setValue(1);
    try {
        btassert<bool>(!(p1 == p2));
        cout << "Passed TEST 35: !(Prize == Prize)\n";
    } catch (bool b) {
        cout << "# FAILED TEST 35 !(Prize == Prize) #\n";
    }
	
    cout << "\nUNIT TEST COMPLETE\n\n";
}

template <typename X, typename A>
void btassert (A assertion)
{
    if (!assertion)
        throw X();
}