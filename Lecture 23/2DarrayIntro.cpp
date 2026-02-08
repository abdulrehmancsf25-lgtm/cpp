#include<iostream>
using namespace std;
bool isPresent(int arr[3][4] , int target , int row , int col){
for (int row = 0 ; row < 3 ; row++){
    for(int col = 0 ; col < 4 ; col++){
        if(arr[row][col] == target){
            return 1;
        }
    }
}
return 0 ; 
}
int main(){
    int  arr[3][4]= {{0,1,2,3},{4,5,6,7},{8,9,10,11}};
  //  int arr[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
    // take input
  /*  for(int row = 0 ; row < 3 ; row++ ){
        for(int col= 0 ; col < 4 ; col++){
            cin >>  arr[row][col] ;
        }
    }*/
 /*   for(int col = 0 ; col < 4 ; col++){
        for(int row = 0 ;row < 3 ; row++){
            cin>> arr[row][col];
        }
    }*/
    // output
     for(int row = 0 ; row < 3 ;row++ ){
        for(int col = 0 ; col < 4 ; col++){
            cout  <<  arr[row][col] <<" ";
        }
        cout << endl;
    }
    cout << " Enter the key to match"<< endl;
    int target ;
    cin >> target;
    if (isPresent(arr , target , 3 , 4 )){
        cout << " Key is present " << endl;
    }
    else{
        cout << " Key not found" ;
    }
    return 0;
}