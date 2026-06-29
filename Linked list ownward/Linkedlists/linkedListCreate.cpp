#include <iostream>
using namespace std;
class linkedListNode{
                     public:
                     int value ;
                      linkedListNode * next;
                    // constructor 
                    linkedListNode(int data){
                        value = data ;
                         next = NULL ;
                    }
};
void insertAtHead(linkedListNode* &head , int data){
                 linkedListNode * newNode = new linkedListNode(data) ;
                // newNode-> value  = data ;
                 newNode -> next = head ; 
                 head = newNode ;
}
void inserAtTail(linkedListNode* &tail , int data){
                       // create new node
                       linkedListNode* newNode = new linkedListNode(data);
                       tail ->next = newNode ;
                       tail = newNode ;
              
}
void printing(linkedListNode* &head){
               linkedListNode * temp = head ;
                while(temp != NULL){
                cout << temp -> value << " ";
                 temp =  temp ->next;
                }
                cout << endl ;
}
int main() {
              linkedListNode * node1 = new linkedListNode(3) ;
            //    cout << node1 -> value << endl ;
            //    cout << node1 ->next << endl ;
            //  linkedListNode *head = node1 ;
            //  printing(head) ;


              
            //    insertAtHead(head , 5) ;
            //   printing(head) ;
            linkedListNode* tail =  node1 ;
             inserAtTail(tail , 4) ;
             inserAtTail(tail , 5) ;
             inserAtTail(tail ,6);
            printing(node1);

    return 0;
}






// #include <iostream>
// using namespace std;
// class A{
//         public:
//         int *next;
//         int value ;
        
// };
// void makeChange(A* &home){
//          home -> next = NULL  ;
//          home -> value = 3 ;
// }
// int main() {
//            A * home = new A ;
//            makeChange(home) ;
            
//            cout << " pointer : " << (*home).next << endl ;
//            cout << " value : " << home -> value << endl ;

//     return 0;
// }