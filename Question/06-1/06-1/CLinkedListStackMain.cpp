#include "CLinkedListSatck.hpp"

#include <iostream>
using namespace std;

int mian(void){
    Stack stack;
    StackInit(&stack);
    
    SPush(&stack, 1); SPush(&stack, 2);
    SPush(&stack, 3); SPush(&stack, 4);
    SPush(&stack, 5);
    
    while(!SIsEmpty(&stack)){
        cout << SPop(&stack) << endl;
    }
    
    
    return 0;
}
