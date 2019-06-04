#include "BSTree.h"

BSTree::BSTree()
    :root(NULL), size(0){/*left intentionally blank*/}
BSTree::~BSTree(){
    clear();
}

bool BSTree::insert(int ins){
    return insert(ins, root);
}

void BSTree::clear(){
    clear(root);
}

unsigned int BSTree::getSize() const{
    return size;
}

void BSTree::inOrder(){
    inOrder(root);
}

bool BSTree::insert(int ins, BSTNode*& current){
    if(current==NULL){
        current= new BSTNode(ins);
        ++size;
        return true;
    }
    else if(current->getContents() < ins)
        return insert(ins, current->getRightChild());
    else if(current->getContents() > ins)
        return insert(ins, current->getLeftChild());
    else
        return false;
}

void BSTree::clear(BSTNode*& current){
    if(current!=NULL){
        clear(current->getLeftChild());
        clear(current->getRightChild());
        delete current;
        current=NULL;
        --size;
    }
    current=NULL;
}

void BSTree::inOrder(BSTNode* current){
    if(current==NULL)
        return;
    
    inOrder(current->getLeftChild());
    cout << current->getContents() << " ";
    inOrder(current->getRightChild());
}

/*
BSTree();
	
	virtual ~BSTree();
	
	bool insert (int);
	
	void clear ();
	
	unsigned int getSize () const;
	
	void inOrder ();
	
private:

	BSTNode* root;
	unsigned int size;

	bool insert (int, BSTNode*&);
	
	void clear (BSTNode*&);
	
	void inOrder (BSTNode*);*/