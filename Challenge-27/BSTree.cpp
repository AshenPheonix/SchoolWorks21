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

bool BSTree::remove(int target){
    return remove(target, root);
}

bool BSTree::remove(int target, BSTNode*& current){
    if(current==NULL)
        return false;
    else if(current->getContents() > target)
        return remove(target, current->getLeftChild());
    else if(target > current->getContents())
        return remove(target, current->getRightChild());
    
    else{
        if(current->getLeftChild()==NULL){
            BSTNode* temp(current);
            current=current->getRightChild();
            delete temp;
        }
        else{
            removeMax(current->getContents(), current->getLeftChild());
        }
        --size;
        return true;
    }
}

void BSTree::removeMax(int& target, BSTNode*& current){
    if(current->getRightChild()==NULL){
        BSTNode* maxNode(current);
        target=current->getContents();
        current=current->getLeftChild();
        delete maxNode;
    }
    else
        removeMax(target, current->getRightChild());
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