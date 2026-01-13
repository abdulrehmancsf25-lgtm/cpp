#include<iostream>
using namespace std;
bool ispossible(int arr[] , int n ,int m , int mid ){
int student = 1;
int pagesum = 0 ;
for (int i = 0; i < n ; i++){
 if ( pagesum + arr[i] <= mid  ){
    pagesum += arr[i];
 }
else{
    student ++ ;
    if ( student > m || arr[i] > mid){
         return false;
    }
    pagesum = arr[i];
}
}
return true ;
}
int bookallot(int arr[] ,int n ,int m ){
     int start = 0 ;
    int sum   = 0 ;
for ( int i = 0; i < n ; i++){
sum  += arr[i];
}
   int end = sum ;
   int mid = start + (end - start) / 2;
  // ans = -1  in case we don't find any answer
   int ans = -1;
   while ( start <= end ){
   if (ispossible(arr ,4 , 2 , mid )) {
    ans = mid ;
    end = mid -1;
   }
else{
      start = mid + 1;
}
    mid = start + (end - start) / 2 ;
   }
   return ans ;
 }
int main (){
  int arr[4] = {30,30,40,50};
  // n for no. of books
  // m for no. of students;
  int m = 2;
 cout << bookallot(arr ,4, 2) ;
    return 0;
}