#pragma once

/*
    programming project 4
    Brandon Porter
*/

#include "node.h"
using namespace std;

template <typename T>
class BSTree{
public:
    //constructor
    BSTree()
        :size(0), entry(NULL){/* empty */}
    //destructor
    ~BSTree(){
        clear();
    }
    //returns size of tree
    unsigned int Size(){
        return size;
    }
    
    //clears tree
    void clear(){
        clear(entry);
        size=0;
        entry=NULL;
    }
    //sorted insert into tree
    //@return, true, insert successful
    //@return, false, already in tree
    bool insert(T newContents){
        return insert(newContents, entry);
    }
    
    //find target
    //@param success or failure
    bool find(T target){
        return find(target, entry);
    }
    //removes target
    //@param success removal
    bool remove(T target){
        return remove(target, entry);
    }
    //returns node finding target
    //@return node
    T* get(T target){
        return get(target, entry);
    }
    //prints in order the set
    void inOrder(){
        inOrder(entry);
    }
    //prints the set in reverse order
    void reverseOrder(){
        reverseOrder(entry);
    }
    //returns count of objects in tree
    //@return count of objects
    unsigned int getCount(){
        return Size();
    }

private:
    unsigned int size;
    BSTNode<T>* entry;
    
    void clear(BSTNode<T>*& current){
        if (current!=NULL){
            clear(current->LeftChild());
            clear(current->RightChild());
            delete current;
        }
    }
    bool insert(T newContents, BSTNode<T>*& current){
        if (current==NULL){
            current = new BSTNode<T>(newContents);
            ++size;
            return true;
        }
        else if(newContents < current->Data())
            return insert(newContents, current->LeftChild());
        else if(newContents > current->Data())
            return insert(newContents, current->RightChild());
        else{
            return false;
        }
    }
    
    bool find(T target, BSTNode<T>*& current){
        if(current==NULL)
            return false;
        else if(current->Data()==target)
            return true;
        else if(current->Data()>target)
            return find(target, current->LeftChild());
        else if(current->Data() < target)
            return find(target, current->RightChild());
        else
            return false;
    }
    bool remove(T target, BSTNode<T>*& current){
        bool success(false);
        if (current==NULL)
            return false;
        //non-matching
        else if(target < current->Data())
            return remove(target, current->LeftChild());
        else if(target > current->Data())
            return remove(target, current->RightChild());
            
        //matching
        else if(current->LeftChild()==NULL){
            BSTNode<T>* temp(current);
            current=current->RightChild();
            delete temp;
            success=true;
        }
        else{
            success=true;
            removeMax(current->Data(), current->LeftChild());
        }
        
        
        if(success){
            --size;
        }
        
        if(size==0)
            entry=NULL;
        
        return success;
    }
    void removeMax(T& target, BSTNode<T>*& root){
        if(root->RightChild()==NULL){
            BSTNode<T>* temp(root);
            target=root->Data();
            root=root->LeftChild();
            delete temp;
        }
        else
            removeMax(target, root->RightChild());
    }
    
    T* get(T target, BSTNode<T>*& current){
        if(current==NULL)
            return NULL;
        else if(target < current->Data())
            return get(target, current->LeftChild());
        else if(current->Data() < target)
            return get(target, current->RightChild());
        else{
            T* temp(new T(current->Data()));
            return temp;
        }
    }
    void inOrder(BSTNode<T>* disp){
        if(disp == NULL)
            return;
            
        inOrder(disp->LeftChild());
        cout << disp->Data() << "\n";
        inOrder(disp->RightChild());
    }
    void reverseOrder(BSTNode<T>* disp){
        if(disp == NULL)
            return;
        
        reverseOrder(disp->RightChild());
        cout << disp->Data() << "\n";
        reverseOrder(disp->LeftChild());
    }
};

/*data membersdata members: size of tree (number of nodes), pointer to root
BSTree () : initialize count to zero, root to NULL
~BSTree () : call clear function
unsigned int getSize () const : return count
(public) void clear () : calls private clear
(private) void clear (BSTNode<T>*& tempRoot) -- helper for public clear
(public) bool insert (T newContents) : calls private insert
(private) bool insert (T newContents, BSTNode<T>*& tempRoot) -- creates node to contain newContents and inserts it in the tree, returns true; if newContents is already in the tree, does not insert, returns false
(public) bool find (T targetData) : calls private find
(private) bool find (T targetData, BSTNode* tempRoot) -- returns true if targetData can be found in tree, else returns false
(public) bool remove (T targetData) : calls private remove
(private) bool remove (T targetData, BSTNode<T>*& tempRoot) -- returns true if targetData is removed from tree, else returns false
(private) void removeMax (T& removed, BSTNode<T>*& tempRoot) -- for use with the recursive remove algorithm
(public) T* get (T targetData) : calls private get
(private) T* get (T targetData, BSTNode* tempRoot) -- returns a pointer to targetData on success, NULL on failure
(public) void inOrder () : calls private inOrder
(private) void inOrder (BSTNode* tempRoot) -- displays contents of nodes in tree in ascending order (requires use of operator<< on node data) to STDOUT
(public) void reverseOrder () : calls private reverseOrder
(private) void reverseOrder (BSTNode* tempRoot) -- displays contents of nodes in tree in descending order (requires use of operator<< on node data) to STDOUT*/