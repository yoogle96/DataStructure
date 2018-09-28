#include "CLinkedList.h"

int main(int argc, const char * argv[]) {
    List list;
    int data, i, nodeNum;
    ListInit(&list);
    
    LInsert(&list, 3);
    LInsert(&list, 4);
    LInsert(&list, 5);
    LInsertFront(&list, 2);
    LInsertFront(&list, 1);
    
    cout << "현재 데이터 수 :" << LCount(&list) << endl;
    
    if(LFirst(&list, &data)){
        cout << data << " ";
        for(i = 0; i < LCount(&list)*3 -1; i++){
            if(LNext(&list,&data)){
                cout << data << " ";
            }
        }
    }
    cout << endl << endl;
    
    nodeNum = LCount(&list);
    if(nodeNum != 0){
        LFirst(&list, &data);
        if(data % 2 == 0){
            LRemove(&list);
        }
        for(i = 0; i < nodeNum-1; i++){
            LNext(&list, &data);
            if(data%2 == 0)
                LRemove(&list);
        }
    }
    nodeNum = LCount(&list);
    
    cout << "현재 데이터 수 : " << LCount(&list) << endl;
    
    if(LFirst(&list, &data)){
        cout << data << " ";
        
        for(i = 0; i <nodeNum-1; i++){
            LNext(&list, &data);
            cout << data << " ";
        }
    }
    cout << endl << endl;
    
    return 0;
}
