#include "CLinkedListSatck.hpp"
#include "CLinkedList.h"

void StackInit(Stack * pstack)
{
    pstack -> plist = new List;
    ListInit(pstack -> plist);
}

int SIsEmpty(Stack * pstack){
    if(LCount(pstack -> plist) == 0)
        return TRUE;
    else
        return FALSE;
}

void SPush(Stack * pstack, Data data){
    LInsertFront(pstack->plist, data);
}

int SPop(Stack * pstack){
    Data data;
    LFirst(pstack -> plist, &data);
    LRemove(pstack -> plist);
    
    return data;    
}

int SPick(Stack * pstack){
    Data data;
    LFirst(pstack -> plist, &data);
    return data;
}
