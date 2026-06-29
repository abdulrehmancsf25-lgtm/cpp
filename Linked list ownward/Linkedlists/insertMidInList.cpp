#include <iostream>
using namespace std;
class Node{
           public:
           Node* next ;
           int value ;
           Node(int value){
              this -> value  = value ;
              next = NULL;
           }
        // destructor
    ~Node() {
        cout << "Destructor called for node with value: " << this->value << endl;
        // No need to delete next here, because our deleteNode 
        // function unlinks the node properly before deletion.
    }
};
void insertAtMiddle(int position,Node* &Head ,Node* &tail ,int value){
            // new node
              Node *nodeToInsert = new Node(value);
              Node* temp = Head;

    // 3 CASES 1) insert at middle 2) insert at start 3) insert at tail
              // in case of first and last we have to update tail and head position also
            if(position == 1){
                // insertAtHead(head ,value)
            // OR
            nodeToInsert ->next = temp ;
            Head = nodeToInsert ;
            return ;
            }
            
              int cnt = 1;
              while(cnt < position -1 ){
                temp = temp -> next ;
                cnt++ ;
              }
            if(temp ->next == NULL ){ // mean last node (pointing null)
                temp->next = nodeToInsert ;
                tail = nodeToInsert ;
                return ;
            }

            nodeToInsert ->next = temp->next ;
            temp ->next = nodeToInsert ;

}
void inserAtTail(Node* &tail , int data){
                       // create new node
                       Node* newNode = new Node(data);
                       tail ->next = newNode ;
                       tail = newNode ;
              
}
// delete node
void deleteNode(Node*  &Head ,Node* &tail, int position ){
        
         if(position == 1){
            Node* temp = Head ;
            Head = Head ->next ;
            temp ->next = NULL ;
            delete temp ;
         }
        else{
             Node* previous = nullptr ;
             Node* currentNode = Head ;
            int cnt = 1 ;
            while(cnt < position){
                previous = currentNode ;
                currentNode = currentNode ->next ;
                cnt++ ;
            }
            if(currentNode->next == NULL){ // if current node is last node update tail
                tail = previous;
            }
        
            previous->next = currentNode ->next ;
            // Unlink the node before deleting
            currentNode ->next = NULL ;
            // free memory
            delete currentNode ;
        }
}
void printNodes(Node* &head){
                Node * temp = head ;
                while(temp != NULL){
                cout << temp -> value << " ";
                 temp =  temp ->next;
                }
                cout << endl ;
}
int main() {
            Node* node1 = new Node(1);
            Node* Head = node1 ;
            Node* tail = node1 ;
            inserAtTail(tail,2);
            inserAtTail(tail,4);
            printNodes(node1);

            // middle insertion
            insertAtMiddle(3,Head,tail,3);  // 1 2 6 3 
            printNodes(Head);

            insertAtMiddle(1,Head,tail,0);
            printNodes(Head);

            insertAtMiddle(6,Head,tail,5);
            printNodes(Head);

            // HEAD & TAIL
            cout << " HEAD VALUE : " << Head->value << " ";
            cout << " TAIL VALUE : " << tail->value << endl ;

            // deleteNode(Head,tail ,1);
            // printNodes(Head);

            deleteNode(Head,tail,6);
            printNodes(Head);

            cout << endl ;
            // after deletion verify that head and tail are correct or not
            cout << " HEAD VALUE : " << Head->value << " ";
            cout << " TAIL VALUE : " << tail->value << endl ;
            // now free entire list 
            while(Head != NULL){
                Node* temp = Head;
                Head = Head->next ;
                delete temp ;
            }
            
    return 0;
}