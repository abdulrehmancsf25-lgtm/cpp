#include <iostream>
using namespace std;
class Node{
        public:
        int val ;
        Node* left ;
        Node* right ;
    Node():val(0),left(nullptr),right(nullptr){}
    Node(int data){
        this-> val = data ;
        this-> left = NULL ;
        this->right = NULL ;
    }
};
Node* buildBST(Node* root , int data){
    if(root == NULL){
        root = new Node(data) ;
        return root ;
    }
    if(data < root -> val)
    root -> left = buildBST(root -> left , data) ;
    else
    root ->  right = buildBST(root ->right , data) ;

     return root ;
    
}
Node*  findPredecessor(Node* root){
     Node* pred  = root ;
     pred= pred ->left ;
     while(pred -> right != NULL && pred -> right != root){
         pred = pred -> right ;
     }
    return pred ;
}
void MorrisInOrder(Node* root){
    Node* curr = root ;
    while(curr != NULL){
        if(curr -> left){
                Node* predecessor  = findPredecessor(curr) ;
                if(predecessor -> right == NULL){
                    predecessor -> right = curr ;
                    curr = curr -> left ;
                }
                else{
                    predecessor -> right = NULL ;
                    cout << curr -> val << " " ;
                    curr = curr -> right ;
                }
        }
        else{
            cout << curr -> val << " " ;
            curr = curr -> right ;
        }
    }
}
Node* insertDataInBst(Node* root){
    while(1){
    int num ;
    cout << "Enter data to put in BST : " ;
    cin >> num ;
    if(num == -1)
        break ;
    root = buildBST(root ,num) ;

    }
    return root ;
}
int main() {
                Node* root = NULL ;
                root = insertDataInBst(root) ;
                cout <<endl <<  "---PRINTTING MORRIS_TRAVERSEL INORDER (LNR)---" << endl ;
                MorrisInOrder(root) ;
    return 0;
}