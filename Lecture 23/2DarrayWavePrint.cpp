#include<iostream>
using namespace std;
void wavePrint(int arr[][2], int m , int n){
    for (int col = 0 ; col < n ; col++ ){
        if (col & 1 ){
            for (int row = m - 1 ; row >= 0 ; row--){
                cout << arr[row][col] << " ";
            }
            cout << endl;
        }
        else{
            for (int row = 0 ; row < m ; row++){
                cout << arr[row][col] << " ";
            }
            cout << "  " ;
        }
   
    }
}
int main(){
    int arr[2][2];
   for(int col = 0 ; col < 2 ; col++){
        for(int row = 0 ;row < 2 ; row++){
            cin>> arr[row][col];
        }}
    wavePrint(arr , 2, 2);
    return 0;
}