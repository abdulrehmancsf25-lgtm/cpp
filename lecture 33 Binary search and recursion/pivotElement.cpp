#include<iostream>
using namespace std ;
int pivot_Element(int* arr ,int s , int e  ){
    // base case
    if(s >= e)
    return arr[s] ;
    // processing
    int mid = s + (e-s)/2 ;
    // recursive calls
    if(arr[mid] < arr[e])
     return pivot_Element(arr , s , mid) ;
    else
    return pivot_Element(arr ,mid +1 , e) ;
}
int main(){
       int arr[] = {6,7,8,9,10,3,4,5} ; // pivot is 0 ;
       int s = 0 ,  e = sizeof(arr)/4 -1 ;
       /*
         int mid = s + (e-s)/2 ;
      while(s < e){
        if(arr[mid] < arr[e])
        e = mid ;
        else
        s = mid + 1 ;
        mid = s + (e-s) / 2;
      }
      cout<< arr[s] ;
      */
     cout << "pivot element of array is " <<  pivot_Element(arr , 0 , e) ;
    return 0 ;
}