#include "DBLinkedList.hpp"

int main(int argc, const char * argv[]) {
    List list;
    int data;
    ListInit(&list);
    
    LInsert(&list, 1);LInsert(&list, 2);
    LInsert(&list, 3);LInsert(&list, 4);
    LInsert(&list, 5);LInsert(&list, 6);
    LInsert(&list, 7);LInsert(&list, 8);
    
    if(LFirst(&list, &data)){
        cout << data << " ";
        
        
        // 오른쪽 노드 참조
        while(LNext(&list, &data)){
            cout << data << " ";
        }
        // 왼쪽 노드 참조
        while(LPrevious(&list, &data)){
            cout << data << " ";
        }
        
    }
    
    
    
    return 0;
}
