#include <iostream>
using namespace std;
class Node{
          public:
          Node* next ;
          int value ;
        // constructor                                      
        Node(int data){
            this -> value = data ;
            this ->next = nullptr ;
        }
        // destructor 
        ~Node(){
               int val = this-> value ;
               cout << "memory free for : " << val << endl ;
               if (this ->next != nullptr){
                delete this-> next ;
                 this->next = nullptr ;
               }
        }
};
void insert(Node* &tail , int value , int target = 0 ){
           // empty list 
           if(tail == nullptr){
             Node* newNode = new Node(value) ;
             newNode ->next = newNode ;
             tail = newNode ;
           }
           else{  Node* temp = tail ;
               while(temp -> value != target)
                    temp  = tail->next ;
                // target founded 
            Node* NodeToInsert = new Node(value) ;
            NodeToInsert -> next = temp -> next ;
            temp -> next = NodeToInsert ;
           }

}
void printNodes(Node* &tail){
    // empty list 
          if(tail == nullptr){
           cout << "empty list! " << endl ;
          return ;
        }
        // non_empty list 
          cout << tail->value << " " ;
          if(tail ->next == tail){ // single node case 
           cout << endl ;
             return ;
          }
        
        Node* temp = tail->next ;
         while(temp != tail){
              cout << temp -> value << " " ;
              temp = temp ->next ;
         }
        cout << endl ;
}
void delNode(Node* &tail,int target){
           // empty list
           if(tail ==nullptr)
           cout << "no deletion possible (Empty list! )" << endl ;
           else{
                 //assuming that "value" is present in the Linked List
                Node* previous = tail ;
                Node* current = previous ->next ;
                while(current -> value != target){
                    previous = current ;
                    current = current->next ;
                }
              // element found 
                if(current == previous)
                  tail = nullptr ;
                else if(current == tail)
                tail = previous ;

                previous->next = current->next ;
                current ->next = nullptr ;
                delete current ;
           }
}
int main() {
            Node* tail = nullptr ;
            insert(tail , 1) ;
            printNodes(tail) ;

            insert(tail, 2,1) ;
            printNodes(tail) ;
      

          insert(tail , 10,1) ;
          printNodes(tail) ;
          cout << tail ->value << " is tail " << endl ;
          // deletion
          delNode(tail,10) ;
          printNodes(tail) ;
          cout << tail ->value << " is tail " << endl ;
          //  again insert to verify
          insert(tail , 3,2);
          printNodes(tail) ;
       
    return 0;
}