#include<iostream>
using namespace std ;
int getMin(int arr[] , int size){
  // base case
  if(size == 1 )
  return arr[0] ;

  return min(arr[0] , getMin(arr + 1 , size -1)) ;
}
int getMax(int* arr , int size){
  // base case 
  if(size == 1 )
  return arr[0] ;
  return max(arr[0] , getMax(arr + 1 , size -1)) ;
}

int main(){
        int arr[] = {-1,99,-103,44,0} ;
        int size = sizeof(arr) /4 ;
     cout << "largest element in array is : " << getMax(arr , size ) << endl ;
     cout << "smallest element in array is : "<< getMin(arr ,size) ;
    return 0 ;
}