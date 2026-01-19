#include <iostream>
#include<vector>
#include<utility>
using namespace std;
/*int search(int arr[] , int n , int key){
    int start=0;
    int end=n-1;
    int mid=start +(end -start)/2 ;
    while(start<=end){
if(arr[mid]==key){
    return mid;
}
if(arr[mid]<key){
    start=mid+1;
}
if(arr[mid]>key){
    end=mid-1;
}
mid=start +(end -start)/2 ;
    }
        return -1;
}
int main(){
int app[5]={3,5,7,9,10};
int qpp[10]={323,345,356,367,377,390,400,600 ,794,999};
int ans=search(qpp,10,999);
cout << " the index of given key is "<<ans << endl;*/
int main(){

            pair <int,int> p;
            p.first=1;
            p.second=4;
            cout<<p.first << p.second <<endl;
            vector<int> app;
            app.push_back(12);
            app.push_back(3);
            app.push_back(64);
            cout << app[2];


    return 0;
}
