//#include "DLinkedList.cpp"
#include "DLinkedList.hpp"

int WhoIsPrecede(int d1, int d2){
    if(d1 < d2)
        return 0;
    else
        return 1;
}

int main(int argc, const char * argv[]) {
    List list;
    int data;
    ListInit(&list);
    
    SetSortRule(&list, WhoIsPrecede);
    
    LInsert(&list, 11);LInsert(&list, 11);
    LInsert(&list, 22);LInsert(&list, 22);
    LInsert(&list, 33);
    
    cout << "현재 데이터 수 :" << LCount(&list) << endl;
    
    if(LFirst(&list, &data)){
        cout << data << " ";
        while(LNext(&list, &data))
            cout << data << " ";
    }
    cout << endl << endl;
    
    if(LFirst(&list, &data)){
        if(data == 22)
            LRemove(&list);
        
        while(LNext(&list, &data)){
            if(data == 22)
                LRemove(&list);
        }
    }
    
    cout << "현재 데이터 수 : " << LCount(&list) << endl;
    
    if(LFirst(&list, &data)){
        cout << data << " ";
        
        while(LNext(&list, &data))
            cout << data << " ";
    }
    cout << endl << endl;
    
    return 0;
}
