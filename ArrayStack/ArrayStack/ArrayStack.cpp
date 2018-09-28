#include "ArrayStack.hpp"

void StackInit(Stack * pstack){
    pstack -> topIndex = -1;
}
int SIsEmpty(Stack * pstack){
    if(pstack -> topIndex == -1){
        return TRUE;
    }
        return FALSE;
}

void SPush(Stack * pstack, Data data){
    pstack -> topIndex++;
    pstack -> stackArr[pstack -> topIndex] = data;
}

Data SPop(Stack * pstack){
    Data rData = pstack -> stackArr[pstack -> topIndex];
    
    if(SIsEmpty(pstack)){
        cout << "데이터가 없습니다." << endl;
        exit(-1);
    }
    
    pstack -> topIndex--;
    
    return rData;
}

void SPeek(Stack * pstack){
    if(SIsEmpty(pstack)){
        cout << "데이터가 없습니다." << endl;
        exit(-1);
    }
    cout << pstack -> stackArr[pstack -> topIndex] << endl;
}
