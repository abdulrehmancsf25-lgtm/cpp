#include<iostream>
using namespace std;
int pivot(int arr[] , int n ){
int start=0;
int end=n-1;
int mid = start + (end-start)/2;
while(start<end){
if(arr[mid] >= arr[0]){
    start = mid + 1;
}
else{
    end = mid;
}
mid = start + (end - start)/2;
}
     return start;
}
int main(){
int arr[7]={8,9,10,4,5,6,7};
int opp[9]={10,11,12,13,5,6,7,8,9};
cout << pivot(opp , 9);
    return 0;
}