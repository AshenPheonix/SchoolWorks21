#include "BSTNode.h"

BSTNode::BSTNode()
    :leftChild(NULL), rightChild(NULL), contents(0){/*left blank*/}
BSTNode::BSTNode(int newCont)
    :leftChild(NULL), rightChild(NULL), contents(newCont){/*left blank*/}
BSTNode::~BSTNode(){
    leftChild=NULL;
    rightChild=NULL;
}

void BSTNode::setContents(int newCont){
    contents=newCont;
}

int BSTNode::getContents() const{
    return contents;
}
int& BSTNode::getContents(){
    return contents;
}

void BSTNode::setLeftChild(BSTNode* newNode){
    leftChild = newNode;
}
void BSTNode::setRightChild(BSTNode* newNode){
    rightChild= newNode;
}

BSTNode* BSTNode::getLeftChild() const{
    return leftChild;
}
BSTNode*& BSTNode::getLeftChild(){
    return leftChild;
}

BSTNode* BSTNode::getRightChild() const{
    return rightChild;
}
BSTNode*& BSTNode::getRightChild(){
    return rightChild;
}