#pragma once
#include <cstdlib>
#include "BSTNode.h"
#include <iostream>

using namespace std;

class BSTree{
public:

	BSTree();
	
	virtual ~BSTree();
	
	bool insert (int);
	
	void clear ();
	
	unsigned int getSize () const;
	
	void inOrder ();
	
	bool remove(int);
	
private:

	BSTNode* root;
	unsigned int size;

	bool insert (int, BSTNode*&);
	void clear (BSTNode*&);
	void inOrder (BSTNode*);
	
	bool remove(int, BSTNode*&);
	void removeMax(int&, BSTNode*&);
};