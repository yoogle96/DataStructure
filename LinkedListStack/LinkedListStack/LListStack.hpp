#ifndef LListStack_hpp
#define LListStack_hpp

#define TRUE 1
#define FALSE 0

typedef int Data;

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
void SPeek(Stack * pstack);



#endif /* LListStack_hpp */
