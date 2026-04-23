#include<iostream>
using namespace std ;
int getSum(int* arr , int size){
    // base case 
    if(size == 1)
    return arr[0] ;
  int ans = arr[0] + getSum(arr + 1 , size -1 ) ;
  return ans ;
}
int main(){
    int arr[] = {5,4,3,2,1} ;
    int size = sizeof(arr) / 4 ;
 cout << "sum of whole array is " <<  getSum(arr , size) ;
    return 0 ;
}