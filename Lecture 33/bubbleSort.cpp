#include<iostream>
using namespace std ;
void ith_round(int *arr ,int j  , int size  ){
            if(j > size - 2 )
             return ;
             if(arr[j] > arr[j+1])
            swap(arr[j] , arr[j+1]) ;
           ith_round(arr , j+1 , size ) ;
}
void   bubble_Sort( int *arr , int size) {
    //  base case 
      if(size <= 1)
       return ;
  
       ith_round (arr , 0 , size ) ;
        bubble_Sort(arr  , size -1 ) ;
}
int main(){
            int arr[] = {9,7,6,5,4,3,1} ;
            for(auto i : arr)
            cout << i << " " ;
            cout << endl ;
            int size = sizeof(arr) /4 ;
            cout << " Buble sort " << endl ;
            bubble_Sort(arr , size) ;
            for(auto i : arr){
                cout << i << " " ;
            }
    return 0 ;
}

