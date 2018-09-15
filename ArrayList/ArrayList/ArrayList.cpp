#include "ArrayList.hpp"


void ListInit(List * plist){
    plist -> numOfData = 0;
    plist -> curPosition = -1;
}
void LInsert(List * plist, LData data){
    plist -> numOfData++;
    plist -> curPosition++;
    
    plist ->arr[plist->curPosition] = data;
}

int LFirst(List * plist, LData * pdata){
    if(plist -> numOfData == 0){
        return FALSE;
    }
    else{
        plist -> curPosition = 0;
        *pdata = plist -> arr[plist -> curPosition];
        return TRUE;
    }
}

int LNext(List * plist, LData * pdata){
    if(plist -> curPosition < plist -> numOfData - 1){
        (plist -> curPosition)++;
        *pdata = plist -> arr[plist -> curPosition];
        return TRUE;
    }
    
    else{
        return FALSE;
    }
}

LData LRemove(List * plist){
    
    int rpos = plist -> curPosition;
    LData dummy = plist -> arr[plist -> curPosition];
    
    while(rpos < plist -> numOfData - 1){
        plist -> arr[rpos] = plist -> arr[rpos + 1];
        rpos++;
    }
    plist -> numOfData--;
    plist -> curPosition--;
    return dummy;
    
}

int LCount(List * plist){
    return plist -> numOfData;
}
