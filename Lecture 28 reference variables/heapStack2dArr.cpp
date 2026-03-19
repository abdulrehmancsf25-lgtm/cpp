#include<iostream>
using namespace std ;
int main(){
    int n ;
    cin >> n;
    // CREATING 2D ARRAY USING DYNAMIC ALLOCATION(Heap memory )
    int** arr = new int* [n] ;
    for(int i = 0 ; i < n ; i++){
        arr[i] = new int[n] ;
    }
    // TAKING INPUT VALUES 
    for(int i = 0 ; i< n ; i++){
        for(int j = 0 ; j <n ; j++){
            cin >> arr[i][j] ;
        }
    }
    // PRINTING VALUES (Output)
     for(int i = 0 ; i< n ; i++){
        for(int j = 0 ; j <n ; j++){
            cout <<  arr[i][j] << " " ;
        }
        cout << endl ;
    }
    return 0 ;
}