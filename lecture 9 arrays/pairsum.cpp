#include<iostream>
#include <utility> // Required for pair
#include <string>
using namespace std;
void psum( int arr[]  , int n ,int s){
 for (int i=0 ; i<n ; i++){
    for(int j=i+1; j<n ;j++){
        if (arr[i] +arr[j]==s){
        cout <<arr[i] <<" "<<arr[j] <<endl;
        }
    }
 }

}
int main(){
int arr[5]={5,3,4,1,2};
int app[6]={2,1,3,4,5,6};
 psum(arr,5 , 5) ;


 
    return 0;
}
/*int main(){
pair<int,int> p;
p.first=5;
p.second=7;
cout << p.first << " " << p.second << endl;
 */