#include "CircularQueue.hpp"

int main(int argc, const char * argv[]) {
    Queue queue;
    
    QueueInit(&queue);
    
    Enqueue(&queue, 1); Enqueue(&queue, 2);
    Enqueue(&queue, 3); Enqueue(&queue, 4);
    Enqueue(&queue, 5);
    
    while(!QIsEmpty(&queue)){
        cout << Dequeue(&queue) << endl;
    }
    return 0;
}
