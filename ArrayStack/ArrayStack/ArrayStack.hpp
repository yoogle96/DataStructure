#ifndef ArrayStack_hpp
#define ArrayStack_hpp

#define STACK_LEN 100
#define TRUE 1
#define FALSE 0

typedef int Data;

#include <iostream>


using namespace std;

typedef struct _arrayStack{
    Data stackArr[STACK_LEN];
    int topIndex;
}ArrayStack;

typedef ArrayStack Stack;

void StackInit(Stack * pstack);
int SIsEmpty(Stack * pstack);

void SPush(Stack * pstack, Data data);
Data SPop(Stack * pstack);
void SPeek(Stack * pstack);

#endif /* ArrayStack_hpp */
