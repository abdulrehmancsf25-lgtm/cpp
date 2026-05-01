#include <iostream>
using namespace std;
void merge_Array( int *arr , int s , int e ){
         int mid = s +(e-s)/ 2;
         int length1 = mid - s + 1   , length2 = e - mid ;
        int *arr1 = new int[length1] ;
        int *arr2  = new int[length2] ;
        // main array indexing
         int main_index = s ;
        for(int i = 0 ; i < length1 ; i++ )
            arr1[i] =  arr[main_index++] ;
        
            main_index = mid+1 ;
        for(int j = 0 ; j < length2 ; j++)
            arr2[j] = arr[main_index++] ;
        
        int i = 0 , j = 0 ;
         main_index = s ;
        while(i < length1 && j < length2){
            if(arr1[i] < arr2[j])
             arr[main_index++] = arr1[i++] ;
            else
            arr[main_index++] = arr2[j++] ;
        }
        while(i < length1)
        arr[main_index++] = arr1[i++] ;
        while(j < length2)
        arr[main_index++] = arr2[j++] ; 
        
    // free dynamic memory
     delete[]arr1 ;
     delete[] arr2 ;
}
void merge_Sort(int *arr , int s , int e ){
       int mid = s + (e-s)/2 ;
    // base case
       if(s >= e)
        return ;
        // left part
        merge_Sort(arr,s , mid) ;
        // right part
        merge_Sort(arr , mid+1 , e) ;

        merge_Array(arr, s,e) ;
}
int main() {
             int arr[7] = {7,6,5,4,3,2,1} ;
             merge_Sort(arr , 0 , 6) ;
             for(auto i : arr)
             cout << i << " ";
    return 0;
}