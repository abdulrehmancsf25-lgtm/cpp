#include<iostream>
using namespace std ;
int pivot_Element(int* arr ,int s , int e  ){
    // base case
    if(s >= e)
    return s ;
    // processing
    int mid = s + (e-s)/2 ;
    // recursive calls
    if(arr[mid] < arr[e])
     return pivot_Element(arr , s , mid) ;
    else
    return pivot_Element(arr ,mid +1 , e) ;
}
int searchFunc(int* arr , int start , int end , int target){
    // base case
  if(start > end)
  return -1 ;
  int mid  = start + (end - start) /2  ;
  if(arr[mid] == target)
  return mid ;
  if(arr[mid] > target)
  return searchFunc(arr , start , mid -1 , target);
else
   return searchFunc(arr , mid + 1 , end, target) ;

}
int main(){
       int arr[] = {6,7,8,9,10,3,4,5} ; // pivot is 0 ;
       int s = 0 ,  e = sizeof(arr)/4 -1 ;
       int pivot = pivot_Element(arr , 0 , e) ;
     cout << "pivot element of array is at idex  " <<  pivot << endl ;
     // NOW SEARCHING IN SORTED AND ROTATED ARRAY 
     int target ; cin >> target ;
     if(target >= arr[0] &&  arr[0] >  arr[pivot] )
     cout << "target is at index " <<  searchFunc(arr , 0 , pivot -1 , target) ;
     else
     cout << " target is at index " <<  searchFunc(arr , pivot , e , target) ;
    return 0 ;
}