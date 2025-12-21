#include<iostream>
using namespace std;
int peak(int arr[] , int n){
int start=0;
int end=n-1;
int mid=start +(end-start)/2;
while(start<end){
    if(arr[mid] < arr[mid + 1]){
        start=mid+1;
    }
    else{
        end=mid;
    }
    mid =start +(end-start)/2;
}
       return start;
}
int main(){
    int arr[6]={2,5,7,8,4,1};
    cout <<"The peak value of given mountain array is at index " << peak(arr , 6) <<endl;
    return 0;
}