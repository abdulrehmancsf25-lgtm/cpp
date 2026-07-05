#include <iostream>
using namespace std;
class Node{
           public:
           Node* next ;
           Node* prev ;
           int data ;
        // constructor
        Node(int n){
            this -> data = n ;
            this -> next = nullptr ;
            this -> prev = nullptr ;
        }
        // destructor 
        ~Node(){
                int val = this->data ;
                cout << " memory free for value : " << val << endl ;
            // extra safety checks 
            if(this->next != nullptr)
              delete next ;
            if (this->prev != nullptr){
                delete prev ;
            this -> next = nullptr ;
            this -> prev = nullptr ;
            }
        }
};
void insertNode(Node* &tail ,int data , int target = 0){
    // empty list case
    if(tail == nullptr){
        Node* newNode = new Node(data) ;
        newNode ->next = newNode ;
        newNode -> prev = newNode ;
        tail = newNode ;
    }
    else{
         Node* temp = tail ;
         while(temp->data != target)          
              temp = temp->next ;
         // assumming target is in list and founded 
        Node* nodeToInsert = new Node(data) ;
        nodeToInsert->next = temp ->next ;
        temp->next->prev = nodeToInsert ;
        nodeToInsert->next = temp ->next ;
        temp ->next = nodeToInsert ;
        nodeToInsert ->prev = temp ;
    }
}
void printNodes(Node* & tail){
     // empty list 
          if(tail == nullptr){
           cout << "empty list! " << endl ;
          return ;
        }
        // non_empty list 
          cout << tail-> data  << " " ;
          if(tail ->next == tail){ // single node case 
           cout << endl ;
             return ;
          }
        
        Node* temp = tail->next ;
         while(temp != tail){
              cout << temp -> data  << " " ;
              temp = temp ->next ;
         }
        cout << endl ;
}
void deleteNode(Node* &tail , int target){
    // assumming target is in linked list 

    // empty list
    if(tail == nullptr){
    cout << " deletion not possible (empty list )" << endl ;
    return ;
    }
    // non - empty case 
    Node* prevNode = tail ;
    Node* currNode = prevNode -> next ;
    while(currNode ->data != target){
        prevNode = currNode ;
        currNode = currNode ->next ;
    }
     
    // target found
       if(currNode == prevNode)
        tail = nullptr ;
       else if(currNode == tail )
        tail = currNode ->next  ;
    currNode ->next ->prev = currNode->prev ;
    prevNode ->next = currNode ->next ;
    currNode -> next = nullptr ;
    currNode ->prev = nullptr ;
    delete currNode ;

    
}
int main() {
              Node* tail = nullptr ;
              insertNode(tail , 1) ;
              printNodes(tail) ;

              insertNode(tail,3,1) ; 
              printNodes(tail) ;
               
              insertNode(tail ,2 ,1 ) ;
              printNodes(tail) ;

              insertNode(tail , 4 , 3) ;
              printNodes(tail) ;

              deleteNode(tail , 4) ;
              printNodes(tail) ;

    return 0;
}