#ifndef CLinkedListSatck_hpp
#define CLinkedListSatck_hpp

//#include "CLinkedList.cpp"
#include "CLinkedList.h"


//#define TRUE 1
//#define FALSE 0

typedef int Data;

typedef struct _listStack
{
    List * plist;
} ListStack;

typedef ListStack Stack;

void StackInit(Stack * pstack);
int SIsEmpty(Stack * pstack);

void SPush(Stack * pstack, Data data);
int SPop(Stack * pstack);
int SPeak(Stack * pstack);

#endif
