#include <iostream>
using namespace std;
class Node{
          public:
          Node* prev;
          Node* next ;
          int data ;
        // constructor
        Node(int val){
                      this -> data = val;
                      this ->next = nullptr ;
                      this ->prev = nullptr ;
        }
};
void insertAtHead(Node* &Head , int val){
      // create new node
      Node* temp = new Node(val) ;
      temp ->next = Head ;
      Head->prev = temp ;
      Head = temp ;

}
void insertAtTail(Node* &Tail , int val){
     // create new node
     Node* temp = new Node(val) ;
     Tail->next = temp ;
     temp->prev = Tail ;
     Tail = temp ;
}
void insertAtMiddle(Node* &Head ,Node* & Tail,int pos ,int val){
     // if poition is 1
     if(pos == 1){
        insertAtHead(Head , val) ;
        return ;
     }
    // if position is middle or last
    Node* temp = Head ;
    int cnt = 1 ;
    while(cnt < pos-1){
        temp = temp->next ;
        cnt++ ;
    }
    if(temp->next == nullptr){ // last node (InsertAtTail case)
       insertAtTail(Tail,val) ;
       return ;
    }
    Node* nodeToInsert = new Node(val) ;
    nodeToInsert ->next = temp->next ;
    temp->next->prev = nodeToInsert ;
    temp ->next = nodeToInsert ;
    nodeToInsert ->prev = temp ;
}
void printNodes(Node* &head){
     Node* temp = head ;
     while(temp != nullptr){
        cout << temp->data << " " ;
        temp = temp->next ;
     }
    cout << endl ;
}
int main() {
            Node* node1 = new Node(2) ;
            Node* Head = node1 ;
            Node* Tail = node1 ;
            printNodes(Head) ;

            insertAtHead(Head , 1);
            printNodes(Head) ;

            insertAtHead(Head , 0) ;
            printNodes(Head) ;

            // now insertion at tail
            insertAtTail(Tail , 3) ;
            printNodes(Head) ;

            insertAtTail(Tail , 4) ;
            printNodes(Head) ;

            cout << " HEAD : "<< Head->data << " TAIL : " << Tail->data << endl ;

            insertAtMiddle(Head,Tail,6,5);
            printNodes(Head) ;
            
            insertAtMiddle(Head,Tail,1,-1) ;
            printNodes(Head);

            insertAtMiddle(Head,Tail,4,6);
            printNodes(Head);
            
            cout << " HEAD : "<< Head->data << " TAIL : " << Tail->data << endl ;

    return 0;
}