#include<iostream>
using namespace std ;
      // DEFAULT ARGUMENT STARTS FROM RIGHT MOST AS  PARAMETER IN FUNCTION FOR DEFAULRT CASE WE SET 
void print(int* ptr, int size = 5 ,int start = 0){
    for(int i = start ; i < size ; i++)
    cout << *(ptr + i) << " " ;
}
int main(){
    int arr[5] = {9,8,7,6,5} ;
        print(arr) ;
        // FOR DEAFULT CASE IN THIS CASE WHEN WE DON'T PASS SIZE AND START THE HAVE DEAFULT VALUE OF 5 & 0 
    return 0 ;
}

