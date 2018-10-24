#include "CircularQueue.hpp"

void QueueInit(Queue * pq){
    pq -> front = 0;
    pq -> rear = 0;
}

int QIsEmpty(Queue * pq){
    if(pq -> rear == pq -> front)
        return TRUE;
    else
        return FALSE;
}

int NextPosIdx(int pos){
    if(pos == QUE_LEN - 1)
        return 0;
    else
        return pos+1;
}

void Enqueue(Queue * pq, Data data){
    if(NextPosIdx(pq -> rear) == pq -> front){
        cout << "Memorry Error" << endl;
        exit(-1);
    }
    
    pq -> rear = NextPosIdx(pq -> rear);
    pq -> queArr[pq -> rear] = data;
}

Data Dequeue(Queue * pq){
    if(QIsEmpty(pq)){
        cout << "Empty !!" << endl;
        exit(-1);
    }
    
    pq -> front = NextPosIdx(pq -> front);
    return pq -> queArr[pq -> front];
}

Data QPeek(Queue * pq){
    if(QIsEmpty(pq))
        cout << "Empty !!" << endl;
    
    return pq -> queArr[NextPosIdx(pq -> front)];
}
