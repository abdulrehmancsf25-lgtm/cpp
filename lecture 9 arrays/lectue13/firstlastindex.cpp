#include<iostream>
using namespace std;
int leftocc(int arr[] , int n , int key){
    int start = 0;
    int end = n-1;
    int mid =start +(end-start)/2 ;
    int ans =-1;
    while (start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if( key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        mid=start + (end-start)/2;
    }
    return ans;
}
int rightocc(int arr[] , int n , int key){
    int start = 0;
    int end = n-1;
    int mid =start +(end-start)/2 ;
    int ans =-1;
    while (start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if( key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        mid=start + (end-start)/2;
    }
    return ans;
}
int main(){
//int arr[9]={1,2,3,4,4,4,4,4,6};
int arr[15]={1,2,3,4,5,6,6,6,6,6,6,6,6,7,8};
cout <<"left most occurence of given key is at index  "<< leftocc(arr , 15 , 4)<< endl;
cout <<"right most occurence of given key is at index "<< rightocc(arr , 15 , 4)<< endl;
    return 0;
}