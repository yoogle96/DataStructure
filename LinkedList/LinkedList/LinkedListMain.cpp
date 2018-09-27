#include "LinkedList.hpp"

int main(int argc, const char * argv[]) {
    
    Node * head = NULL;
    Node * tail = NULL;
    Node * curr = NULL;
    Node * newNode = NULL;
    
    int readData;
    
    while(1){
        cout << "데이터를 입력하세요" << endl;
        cin >> readData;
        if(readData < 1)
            break;

            newNode = new Node;
            newNode -> data = readData;
            newNode -> next = NULL;
        
        if(head == NULL){
            head = newNode;
        }
        
        else{
            tail -> next = newNode; // 현재 꼬리의 다음이 newNode가 돼어 노드를 연결하고
        }
        
        tail = newNode; // 새로운 노드를 꼬리로 저장한다.
    }
    cout << endl;
    
    cout << "----------출력-----------" << endl;
    
    if(head == NULL){
        cout << "데이터가 없습니다." << endl;
    }
    
    else{
        curr = head;
        cout << curr -> data << endl;
        
        while(curr -> next != NULL){
            curr = curr -> next;
            cout << curr -> data << endl;
        }
    }
    
//    메모리 해제
    cout << "----------메모리 해제-----------" << endl;
    
    if(head == NULL){
        cout << "삭제할 데이터가 없습니다." << endl;
    }
    else{
        curr = head;
        cout << "(" << curr -> data << ")" << "를 삭제합니다." << endl;
        delete curr;
        while(curr -> next != NULL){
            curr = curr -> next;
            cout << "(" << curr -> data << ")" << "를 삭제합니다." << endl;
            delete curr;
        }
    }
    
    
    return 0;
}
