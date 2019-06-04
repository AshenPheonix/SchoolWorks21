#pragma once
#include <cstdlib>

class BSTNode{
public:

	BSTNode();
	BSTNode(int);
	
	virtual ~BSTNode();
	
	void setContents (int);
	
	int getContents () const;
	int& getContents ();
	
	void setLeftChild (BSTNode*);
	void setRightChild (BSTNode*);
	
	BSTNode* getLeftChild () const;
	BSTNode*& getLeftChild ();
	
	BSTNode* getRightChild () const;
	BSTNode*& getRightChild ();

private:
	BSTNode* leftChild;
	BSTNode* rightChild;
	int contents;
};