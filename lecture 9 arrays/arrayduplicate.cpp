
//problem.An array of size n is given in which n-1 numbers are present and a duplicate of one of them .find that duplicate
/*
#include<iostream>
using namespace std;
void dup(int arr[], int n){
    for(int i=0; i<n ; i++){
for(int j=i+1; j< n; j++){
    if(arr[i]==arr[j]){
        cout << arr[i] <<" ";
    }
}
       
    }

}
int main(){
int arr[6]={2,4,4,1,3,3};
int spp[7]={1,3,4,3,2,5,5};
dup(arr , 6);
cout <<endl;
dup(spp,7);

return 0;
}
*/

#include<iostream>
using namespace std;
int dup(int arr[],int n){
    int ans=0;
    for (int i=0 ; i < n; i++){
        ans =ans ^ arr[i];
    }
    for(int i=1 ; i < n ; i++){
        ans=ans^i;
}
return ans;
}
int main(){
int arr[10]={1,2,3,4,5,6,7,8,9,1};
cout << dup(arr , 10) << endl ;
return 0;
}