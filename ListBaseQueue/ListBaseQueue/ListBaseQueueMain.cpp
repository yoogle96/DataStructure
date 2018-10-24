#include "ListBaseQueue.hpp"

int main(int argc, const char * argv[]) {
    Queue q;
    
    QueueInit(&q);
    
    Enqueue(&q, 1); Enqueue(&q, 2);
    Enqueue(&q, 3); Enqueue(&q, 4);
    Enqueue(&q, 5);
    
    while(!QIsEmpty(&q)){
        cout << Dequeue(&q) << endl;
    }
    
    return 0;
}
