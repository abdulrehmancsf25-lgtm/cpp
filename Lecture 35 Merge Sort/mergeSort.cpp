#include <iostream>
using namespace std;
void merge_Array( int *arr , int s , int e ){
         int mid = s +(e-s)/ 2;
         // initializing new arrays to merge them in original array in sorted form 
        int length1 = mid - s + 1   , length2 = e - mid ;
        int *first_arr = new int[length1] ;
        int *second_arr  = new int[length2] ;
        // main array indexing
         int main_index = s ;
        for(int i = 0 ; i < length1 ; i++ )
            first_arr[i] =  arr[main_index++] ;
        
            main_index = mid+1 ;
        for(int j = 0 ; j < length2 ; j++)
            second_arr[j] = arr[main_index++] ;
        // MERGING THE ARRAYS IN ORIGINAL ARRAY 
        int i = 0 , j = 0 ;
         main_index = s ;
        while(i < length1 && j < length2){
            if(first_arr[i] < second_arr[j])
             arr[main_index++] = first_arr[i++] ;
            else
            arr[main_index++] = second_arr[j++] ;
        }
        while(i < length1)
        arr[main_index++] = first_arr[i++] ;
        while(j < length2)
        arr[main_index++] = second_arr[j++] ; 
        
    // free dynamic memory
     delete[]first_arr ;
     delete[] second_arr ;
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
    // merge call for the array 
        merge_Array(arr, s,e) ;
}
int main() {
             int arr[7] = {7,6,5,4,3,2,1} ;
             for(auto i : arr)
             cout << i << " " ;
             cout << endl ;
             cout << " Merge sort  " << endl ;
             merge_Sort(arr , 0 , 6) ;
             for(auto i : arr)
             cout << i << " ";
    return 0;
}