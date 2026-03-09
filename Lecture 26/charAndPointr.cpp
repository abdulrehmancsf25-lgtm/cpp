#include <iostream>
using namespace std ;
int main(){
    int arr[5] ={2,4,6,8,10} ;
    char ch[5] = {'a','b','c','d','\0'} ; // OR 
    char ch1[5] = "abcd" ; // 1 SPACE FOR  NULL CHARACTER
    string ch2 = "abcd" ; // String is Dynamic (ONlY  FOR CONCEPT REVISION)
    cout <<"Address will printed and is " <<  arr << endl ;
    // COUT BEHAVES DIFFERENTLY FOR CHAR AND INT ARRAYS
    cout << ch << endl ;
    int *ptr1 = arr ;
    char *ptr2 = ch ;
    cout << *ptr1  << endl ;
    // ACCESSING VALUE AT ADDRESS OUT OF RANGE PRINTS GARBAGE VALUE 


                  cout << *(ptr2 + 3)  << endl ;
                          //   OR    SAME 
                     cout << ptr2[3] << endl ;


    //  HERE COUT BEHAVE DIFFERENTLY
    // IT WILL PRINT ENTIRE STRING NOT ADDRESS
    cout << ptr2 << endl ;
    return 0 ;
}
/*#include<iostream>
using namespace std ;
int main(){
    int ans  = 1 , i = 1 ;
    while(i <= 10){
        cout << ans  << " " ;
        ans *= -2 ;
        i++ ;
    }
    return 0 ;
}
// IN FUNCTION CALL ONLY VALUE IS CHANGED FOR SIMPLE POINTER NOT ADDRESS(ADDRESS IS CHANGRD FOR ONLY THAT FUNCTION)
#include<iostream>
using namespace std ;
void print(int *p){
    cout << p << endl ;
    cout << *p << endl ;
    *p += 5 ;
   //  p += 4 ;
}
 //changes  p += 4  Only the photocopy (local p)  
 // *p += 5     The house itself (value at the address)
int main(){
     int num = 5 ;
     int *ptr = &num ;
     print(ptr) ;
     //cout << ptr << endl ;
     cout << *ptr << endl ;

    return 0 ;
}
#include<iostream>
using namespace std ;
int getSum(/*int arr[] int *arr , int n){
    cout << sizeof(*arr) << endl; 
    cout << " size of arr in function which behaves as a pointer is "<< sizeof(arr) << endl ;
    int ans = 0 ;
    for(int i = 0 ; i < n ; i++){
      //  ans += arr[i] ;
      // ans += i[arr] ;
    //  ans += *(arr + i) ;
        ans += *(i + arr ) ;
    }
    return ans ;
}
int main(){
    int arr[5] = {2,4,6,8,10} ;
    // we can call function (arris a pointer so we can change its position)
    cout <<  getSum(arr + 3, 2) << " is the sum of array " << endl ;
    return 0 ;
} */