#include<iostream>
using namespace std ;
int arraySum(int* arr1 , int j ){
    int sum = 0 ;
          for(int i = 0 ; i < j ; i++){
             sum += *(arr1 + i)  ;
          }
          return sum ;
}
int main(){
    int* ptr = new int ; // TOTAL 12 BYTES ALLOCATION(8 bytes in STACK & 4 in HEAP
    *ptr = 5 ;
    *ptr += 5 ;
    cout << "new int value " << *ptr << endl ;
    
       int n ;
       cout << "Enter size to create an array " ;
       cin >> n ;
       // CREATING VARIABLE SIZE ARRAY USING DYNAMIC ALLOCATION(heap)
       int* arr = new int[n] ;
       for(int i = 0; i < n ; i++){
        cin >> arr[i] ;
       }
 cout << "Sum of array elements is " <<  arraySum(arr , n) ;
    return 0 ;
}