
#include<iostream>
using namespace std;
void print (int arr[] ,int n){
for(int i=0 ; i<n ; i++){
    cout << arr[i] <<" " ;
}
}
void altswap(int arr[] , int n){
    for(int i=0; i<n; i+=2){
if(i + 1 < n){
    //swap process;
      //swap(arr[i] , arr[i +1]);
    int temp=arr[i+1];
    arr[i+1]=arr[i];
    arr[i]=temp;
  
}
    }
}
int main(){

int arr[5]={2,3,5,6,7};
int app[6]={5,6,8,9,0,9};
 altswap(arr , 5) ;
 altswap(app , 6 ) ;
print(arr , 5);
cout << endl;
print(app , 6);
return 0;
}
