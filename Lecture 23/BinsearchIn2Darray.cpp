#include<iostream>
using namespace std;
bool BinSearch(int arr[][4] , int target , int m , int n ){
          int rows = m ;
          int cols = n ;
          int start = 0 ;
          int end = m*n -1 ;
          int mid = start + (end - start)/2 ;
          while(start <= end){
               if(arr[mid/cols][mid%cols] == target){
                return true ;
               }
            if(arr[mid/cols][mid%cols] < target ){
                start =  mid + 1;
            }
            else{
                end = mid - 1 ;
            }
           mid = start + (end - start)/2 ;
          }
            return false ;
}
int main(){
    int arr[3][4] = {1,3,5,7,
                    10,11,16,20,
                    23,30,34,60} ; 
                    int target;
                    cout << "Enter the key to search for " << endl;
                    cin >> target ;
              cout << BinSearch(arr , target , 3 , 4);
}