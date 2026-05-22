#include<iostream>
#include<array>
using namespace std;
int main(){
     array <int , 6> arr  = {2,4,3,6,5,7} ;
     /*
     for(int i = 0 ; i < arr.size() -1  ;i++){
    for(int i= 1 ; i < arr.size() ; i++ ){
     if(arr[i-1] > arr[i]){
        int temp = arr[i];
        arr[i ] = arr[i -1 ] ;
        arr[i -1] = temp ;
     }
      
    }
}*/
   for(int i = 1 ; i < arr.size() ; i++){
      // N-1 ROUNDS
      for(int j = 0 ; j < arr.size() - i ; j++){
        if(arr[j] > arr[j+ 1] ){
            int temp = arr[j+1] ;
            arr[j+1] = arr[j] ;
            arr[j] = temp ;
        }
      }

   }


    for(int i = 0 ; i < arr.size() ; i++){
        cout << arr[i] << " " ;
    }
    return 0 ;
}