#include<iostream>
using namespace std ;
int arraySum(int * arr ,  int size){
// BASE CASE 
if(size == 1)
return arr[0] ;

//  int remainingPart =   arraySum(arr + 1 , size -1 ) ;  
 // int ans = arr[0] + remainingPart ;

return arr[0] + arraySum(arr +1 , size -1 ) ;
}
int main(){
        int arr[] = {1,2,3,4,5} ;
        int size = sizeof(arr) /4 ;
    
    cout << "Sum of array is : " <<  arraySum(arr , size ) ;
    return 0 ;
}