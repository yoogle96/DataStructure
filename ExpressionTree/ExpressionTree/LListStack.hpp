#ifndef LListStack_hpp
#define LListStack_hpp

#include "BinaryTree.hpp"

#define TRUE 1
#define FALSE 0

typedef BTreeNode * Data;

#include <iostream>
using namespace std;

typedef struct _node{
    Data data;
    struct _node * next;
}Node;

typedef struct _listStack{
    Node * head;
}ListStack;

typedef ListStack Stack;

void StackInit(Stack * pstack);
int SIsEmpty(Stack * pstack);

void SPush(Stack * pstack, Data data);
Data SPop(Stack * pstack);
Data SPeek(Stack * pstack);



#endif /* LListStack_hpp */
