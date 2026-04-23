#include<iostream>
using namespace std ;
int left_Position(int* arr , int s , int e ,int target ,int index){
   
    // base case
    if(s > e)
    return index ;

    int mid = s + (e-s)/2 ;
    if(arr[mid] == target ){
        index = mid ;
        return left_Position( arr , s , mid -1 ,target , index) ;
    }
    else if ( arr[mid] > target)
    return left_Position( arr , s , mid -1 ,target , index) ;

    else
    return left_Position( arr , mid +1 , e ,target , index) ;
   
}
int main(){
    int arr[] = {2,4,6,8,10,12} ;
    int end = sizeof(arr) /4 -1  , index = -1 ;
    int ans = left_Position(arr , 0 , end ,12 ,index) ;
   cout << "left most occurrence of given target is at index :  "  << ans ;
    return 0 ;
}