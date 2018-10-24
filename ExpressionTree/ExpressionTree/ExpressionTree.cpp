#include <iostream>

#include "ExpressionTree.hpp"
#include "LListStack.hpp"
#include "BinaryTree.hpp"


BTreeNode * MakeExpTree(char exp[]){
    Stack stack;
    BTreeNode * pnode;
    
    int expLen = (int)strlen(exp);
    int i;
    
    StackInit(&stack);
    
    for(i = 0; i < expLen; i++){
        pnode = MakeBTreeNode();
        
        if(isdigit(exp[i])){
            SetData(pnode, exp[i] - '0');
        }
        else{
            MakeRightSubTree(pnode, SPop(&stack));
            MakeLeftSubTree(pnode, SPop(&stack));
            SetData(pnode, exp[i]);
        }
        
        SPush(&stack, pnode);
    }
    
    return SPop(&stack);
}

void ShowNodeData(int data){
    if(0 <= data && data <= 9)
        cout << data;
    else
        cout << (char)data;
}

int EvaluateExpTree(BTreeNode * bt){
    int op1, op2;
    
    if(GetLeftSubTree(bt) == NULL && GetRightSubTree(bt) == NULL)
        return bt -> data;
    
    op1 = EvaluateExpTree(GetLeftSubTree(bt));
    op2 = EvaluateExpTree(GetRightSubTree(bt));
    
    switch(GetData(bt)){
        case '+':
            return op1 + op2;
        case '-':
            return op1 - op2;
        case '*':
            return op1 * op2;
        case '/':
            return op1 / op2;
    }
    
    return 0;
}

void ShowPrefixTypeExp(BTreeNode * bt){
    PreorderTraverse(bt, ShowNodeData);
}

void ShowInfixTypeExp(BTreeNode * bt){
    if(bt == NULL)
        return;
    
    if(bt -> left != NULL || bt -> right != NULL)
        cout << "(";
    
    ShowInfixTypeExp(bt -> left);
    ShowNodeData(bt -> data);
    ShowInfixTypeExp(bt -> right);
    
    if(bt -> left != NULL || bt -> right != NULL)
        cout << ")";
//    InorderTraverse(bt, ShowNodeData);
}

void ShowPostfixTypeExp(BTreeNode * bt){
    PostorderTraverse(bt, ShowNodeData);
}
