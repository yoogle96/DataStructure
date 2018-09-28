#include "LListStack.hpp"

int main(int argc, const char * argv[]) {
    Stack stack;
    StackInit(&stack);
    SPush(&stack, 10);
    SPush(&stack, 20);
    SPush(&stack, 30);
    SPush(&stack, 40);
    SPush(&stack, 50);
    
    while(!SIsEmpty(&stack)){
        cout << SPop(&stack) << endl;
    }
    return 0;
}
