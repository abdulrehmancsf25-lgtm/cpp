#include <iostream>
using namespace std;
class Hero{
           public: 
           int score ;
             // + operator oveloading (binary operator )
            void operator+ (Hero &B){
                int val1 = this ->score ;
                int val2 = B.score ;
                cout << " + operator will do subtraction : " << val2 - val1 << endl ;
           }
           // [] operator oveloading (binary operator )
           void operator[] (int index ) {
                            cout << " hello world is printed "<< endl ;
           }
           void operator- (){
                         cout << " minus is printed (unary operator )" << endl ;
           }
};
int main() {
               Hero obj1 ,obj2 ;
               obj1.score = 5 ;
               obj2.score = 7 ;
               obj1 + obj2 ;
                 
               obj1[2] ;
               -obj2;
    return 0;
}