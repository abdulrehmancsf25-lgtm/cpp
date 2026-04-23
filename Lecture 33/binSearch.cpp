#include<iostream>
using namespace std ;
int binary_Search(int* arr , int s , int e ,int key){
   
    // base case
    if(s > e)
    return -1  ;
  // second base case 
    int mid = s + (e-s) /2 ;
    if(arr[mid] == key)
    return mid ;
     //recursive calls 
    else if(arr[mid] > key)
    return   binary_Search(arr , s , mid - 1 , key ) ;
    else
    return binary_Search(arr , mid+1 , e , key) ;
}
int main(){
    int arr[] = {2,4,6,8,10,12} ;
    int end = sizeof(arr) /2 -1 ;
    int ans = binary_Search(arr , 0 , end ,12 ) ;
    if( ans != -1)
    cout << "element found at index " << ans ; 
    else
    cout << "not found " ;
    return 0 ;
}