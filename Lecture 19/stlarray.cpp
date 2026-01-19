#include<iostream>
#include<array>
using namespace std ;
int main(){
        array<int,4> arr = {1,2,3,4};
int size = arr.size() ;
/*cout << size << endl;
 for (int i =0 ; i< size ; i++){
    cout << arr[i] << endl ;
 }*/
 cout << " value of index 2 is " << arr.at(2) << endl ;
cout << " empty or not " << arr.empty() << endl ;
cout << " first element of array is  " << arr.front() << endl;
cout << " last element of array is " << arr.back() << endl ;
return 0 ;
}