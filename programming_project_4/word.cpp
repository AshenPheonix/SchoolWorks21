#include "word.h"

Word::Word()
    :count(1)
{/* empty on purpose*/}
Word::Word(string newWord)
    :word(newWord), count(1)
{/* empty on purpose*/}
Word::~Word()
{/*nothing to do*/}

string Word::getWord() const{
    return word;
}
void Word::setWord(string newWord){
    word = newWord;
}

unsigned int Word::getCount() const{
    return count;
}
void Word::incrementCount(){
    ++count;
}

bool operator ==(Word w1, Word w2){
    for(unsigned int i(0); i<w1.word.length(); ++i)
        w1[i] = tolower(w1[i]);
    for(unsigned int i(0); i<w2.word.length(); ++i)
        w2[i] = tolower(w2[i]);
    return (w1.word == w2.word);
}
bool operator <(Word w1, Word w2){
    for(unsigned int i(0); i<w1.word.length(); ++i)
        w1[i] = tolower(w1[i]);
    for(unsigned int i(0); i<w2.word.length(); ++i)
        w2[i] = tolower(w2[i]);
    return (w1.word < w2.word);
}
bool operator >(Word w1, Word w2){
    for (unsigned int i(0); i<w1.word.length(); ++i)
        w1[i] = tolower(w1[i]);
    for(unsigned int i(0); i<w2.word.length(); ++i)
        w2[i] = tolower(w2[i]);
    return (w1.word > w2.word);
}
ostream& operator <<(ostream& out, Word w1){
    out << w1.word << " " << w1.count;
    return out;
}

char& Word::operator [](unsigned int i){
    return word[i];
}

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