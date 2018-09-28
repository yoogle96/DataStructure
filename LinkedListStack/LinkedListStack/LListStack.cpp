#include "LListStack.hpp"

void StackInit(Stack * pstack){
    pstack -> head = NULL;
}

int SIsEmpty(Stack * pstack){
    if(pstack -> head == NULL)
        return TRUE;
    return FALSE;
}

void SPush(Stack * pstack, Data data){
    Node * newNode = new Node;
    newNode -> data = data;
    
    newNode -> next = pstack -> head;
    pstack -> head = newNode;
}

Data SPop(Stack * pstack){
    if(SIsEmpty(pstack)){
        exit(-1);
    }
    
    Data rData = pstack -> head -> data;
    Node * rNode = pstack -> head;
    
    pstack -> head = pstack -> head -> next;
    delete rNode;
    return rData;
}
void SPeek(Stack * pstack);
