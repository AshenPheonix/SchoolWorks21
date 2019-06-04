#pragma once

#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

class Word{
public:
    Word();
    Word(string newWord);
    virtual ~Word();
    
    string getWord() const;
    void setWord(string newWord);
    
    unsigned int getCount() const;
    void incrementCount();
    
    friend bool operator ==(Word w1, Word w2);
    friend bool operator <(Word w1, Word w2);
    friend bool operator >(Word w1, Word w2);
    friend ostream& operator <<(ostream& out, Word w1);
    char& operator [](unsigned int);
private:
    string word;
    unsigned int count;
};

/*data members: word (string), count (unsigned int)
Word () : count to 1
Word (string newWord) : initialize word to newWord, count to 1
virtual ~Word () : nothing to be done
string getWord () const
void setWord (string newWord)
unsigned int getCount () const
void incrementCount () : add 1 to count
operator== (make sure this is case-insensitive)
operator< (make sure this is case-insensitive)
operator> (make sure this is case-insensitive)
operator<< : place contents of Word formatted as "WORD COUNT" on the stream*/