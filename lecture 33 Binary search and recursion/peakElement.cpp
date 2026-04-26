#include<iostream>
using namespace std ;
int peak_Element(int* arr , int s , int e ){
   
    // base case
    if(s >= e)
    return arr[s] ;

    int mid = s + (e-s)/2 ;
   
     if ( arr[mid] < arr[mid+1])
    return peak_Element( arr , mid +1 , e ) ;

    else
    return peak_Element( arr , s , mid  ) ;
   
}

int main(){
    int arr[] = {2,4,6,8,7,4,2,1} ;
    int end = sizeof(arr) /4 -1 ;
    peak_Element(arr , 0 , end ) ;
   cout << "peak element of array is  :  "  <<  peak_Element(arr , 0 , end ) ;
    return 0 ;
}