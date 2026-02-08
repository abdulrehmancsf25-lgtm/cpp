#include<iostream>
using namespace std;

int  rowSum(int arr[][4], int m, int n) {
    cout << "Calculating Row Sums:" << endl;
       int maxim = -1 ;
    for(int row = 0; row < m; row++) {
        int sum = 0;
     
        for(int col = 0; col < n; col++) {
            sum += arr[row][col];
        }
        if(sum > maxim){
            maxim = row ;
        }
        cout << "Sum of row " << row << " is: " << sum << endl;
    }
    cout << "maximum sum is in row index " ;
    return maxim ;
}

int main() {
    int arr[3][4];
    
    cout << "Enter 12 integers " << endl;
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 4; col++) {
            cin >> arr[row][col];
        }
    }

  cout <<   rowSum(arr, 3, 4);
    return 0;
}