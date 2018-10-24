#include "BinaryTree.hpp"
#include <iostream>
#include <stdlib.h>

using namespace std;

BTreeNode * MakeBTreeNode(void){
    BTreeNode * nd = new BTreeNode;
    nd -> left = NULL;
    nd -> right = NULL;
    return nd;
}

BTData GetData(BTreeNode * bt){
    return bt -> data;
}

void SetData(BTreeNode * bt, BTData data){
    bt -> data = data;
}

BTreeNode * GetLeftSubTree(BTreeNode * bt){
    return bt -> left;
}

BTreeNode * GetRightSubTree(BTreeNode * bt){
    return bt -> right;
}

void MakeLeftSubTree(BTreeNode * main, BTreeNode * sub){
    if(main -> left != NULL)
        delete main -> left;
    
    main -> left = sub;
}

void MakeRightSubTree(BTreeNode * main, BTreeNode * sub){
    if(main -> right != NULL)
        delete (main -> right);
    
    main -> right = sub;
}

void InorderTraverse(BTreeNode * bt, VisitFuncPtr action){
    if(bt == NULL)
        return;
    
    InorderTraverse(bt -> left, action);
    action(bt -> data);
    InorderTraverse(bt -> right, action);
}

void PreorderTraverse(BTreeNode * bt, VisitFuncPtr action){
    if(bt == NULL)
        return;
    
    action(bt -> data);
    PreorderTraverse(bt -> left, action);
    PreorderTraverse(bt -> right, action);
}

void PostorderTraverse(BTreeNode * bt, VisitFuncPtr action){
    if(bt == NULL)
        return;
    
    PostorderTraverse(bt -> left, action);
    PostorderTraverse(bt -> right, action);
    action(bt -> data);
}






