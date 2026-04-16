#include<iostream>
using namespace std ;
int arraySum(int * arr ,  int size){
// BASE CASE 
if(size == 1 )
return arr[0] ;
/*
 int remain = arraySum(arr+1 , size -1 ) ;
 int maxi ;
if(arr[0] > remain  ) 
  maxi = arr[0] ;
 else maxi = remain ;
return maxi ;   
*/
  return max(arr[0] , arraySum(arr+1 , size -1 )) ;
}
int main(){
        int arr[] = {-1,99,-103,44,0} ;
        int size = sizeof(arr) /4 ;
    
    cout << "largest element in array is : " << arraySum(arr , size ) ;
    return 0 ;
}