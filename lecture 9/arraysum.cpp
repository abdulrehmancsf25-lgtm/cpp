#include<iostream>
using namespace std;
int arsum(int ar[],int n){
    int sum =0;
for (int i=0; i<n; i++){
sum=sum + ar[i];
}
return sum;
}

int main(){
int ar[10]={2,4,6,8,10,12,14,16,18,20};
cout <<" sum of array elements is "<< endl;
cout << arsum(ar,3);
    return 0;
}