#include<iostream>
using namespace std ;
int  isPresent(int arr[] , int size ,int count , int key){
  // base case 
  if(size == 0 )
  return -1 ;
  // processing
  if(arr[0] == key)
  return count ;
  count++ ;
  return isPresent(arr + 1 , size -1 , count , key) ;
}
bool linearSearch(int* arr , int size , int key){
    // base case 
    if(size == 0)
    return false ;

    if(arr[0] == key)
    return true ;
   
   return linearSearch(arr + 1 , size -1 , key ) ; 
}
int main(){
    int arr [] = {1,-2,0,5,6,7} ;
    int size = sizeof(arr) / 4 ;
    int count = 0 ;
    int key ;
    cout << "Enter the key to search for : " ;
    cin >> key ;
    int ans = isPresent(arr , size , count ,key ) ;
    if( ans == -1 )
    cout << "Element not found " ;
    else
    cout << "element found at index " << ans ;
    /*
 if(linearSearch(arr , size , key))
 cout << "Element found " << endl ;
 else
 cout << "Not found " << endl ;
 */
return 0 ;

}