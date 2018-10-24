#include "Deque.hpp"
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    Deque deq;
    
    DequeInit(&deq);
    DQAddFirst(&deq, 3);
    DQAddFirst(&deq, 2);
    DQAddFirst(&deq, 1);
    DQAddLast(&deq, 4);
    DQAddLast(&deq, 5);
    DQAddLast(&deq, 6);
    
    while(!DQIsEmpty(&deq))
        cout << DQRemoveFirst(&deq);
    
    cout << endl;
    
    DQAddFirst(&deq, 3);
    DQAddFirst(&deq, 2);
    DQAddFirst(&deq, 1);
    DQAddLast(&deq, 4);
    DQAddLast(&deq, 5);
    DQAddLast(&deq, 6);
    
    while(!DQIsEmpty(&deq))
        cout << DQRemoveLast(&deq);
    
    cout << endl;
    return 0;
}
