#include<iostream>
using namespace std ;
int back_Array(int *arr , int j , int temp , int size){
       if(j < 0 )
         return j ;
        if(temp < arr[j]){
            arr[j+1] = arr[j] ;
       return  back_Array(arr , j-1 , temp , size) ;
        }
        else 
              return j ;    
}
void insertion_Sort(int *arr , int i , int size){
     /// base case
       if(i >= size  )
        return ;
        // processing 
        int temp = arr[i] ;
     int j  = back_Array(arr , i-1 , temp , size) ;
      arr[j+1] = temp  ;
      insertion_Sort(arr , i+1 , size) ;
}
int main(){
            int arr[] = {9,8,7,-6,-4,0} ;
            for(auto i : arr)
            cout << i << " " ;
            cout << endl ; 
            cout << "Insertion Sort " << endl ;
            int size = sizeof(arr) / 4;
            insertion_Sort(arr , 1 , size) ;
         for(auto i : arr)
         cout << i << " " ;
 return 0 ;
}