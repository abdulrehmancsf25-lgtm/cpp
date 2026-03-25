#include<iostream>
using namespace std ;
inline int getMax(int& i , int& j ){
    return (i > j )? i : j ;
}
int main(){
    int a = 5 , b = 4 , ans ;
  //   if else condtion of if ( a > b ) then else   USING Tertiory operator
   ans = (a > b) ? a :  b ;
   cout << ans  << endl ;

 // LIKE MACROS INLINE FUNCTION MOSTLY OF 1 LINE FUNCTION (MAY BE 2 TO 3 ) REPLACES FUNCTION CALL BY THAT LINE
 // ACTUALLY O FUNCTION CALL : NO MEMORY WASTE
          b += 3 ;
      ans = getMax(a, b ) ; // replace by line (a > b)? a : b ;
      cout << ans << endl ;

          b -= 3 ;
          ans = getMax(a, b) ;  // replace by line (a > b)? a : b ;
          cout << ans << endl ;

          // tertiory operator practice 
           char ch = (1)? 'a' : 'b' ;
           cout << ch ;
    return 0 ;
}