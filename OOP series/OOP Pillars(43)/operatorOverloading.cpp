#include <iostream>
using namespace std;
class Hero{
           public: 
           int score ;
           int temp ;
             // + operator oveloading (binary operator )
            void operator+ (Hero &B){
                int val1 = this ->score ;
                int val2 = B.score ;
                cout << " + operator will do subtraction : " << val2 - val1 << endl ;
           }
            // + operator overloading with int
            void operator+(int n){
              cout << " over load to multiply " << this -> score * n << endl ;
           }
          
           
           // [] operator oveloading (binary operator )
           void operator[] (int index ) {
                            cout << " hello world is printed "<< endl ;
           }
           void operator- (){
                         cout << " minus is printed (unary operator )" << endl ;
           }
}; // for n + object of hero above function will not work as e.g : 5.operator+(hero &object ) will not be possible
Hero operator+(int n , Hero& h1){
               return Hero{n * h1.score} ;
           }
int main() {
            //    Hero obj1 ,obj2 ;
            //    obj1.score = 5 ;
            //    obj2.score = 7 ;
            //    obj1 + obj2 ;
                 
            //    obj1[2] ;
            //    -obj2;

            Hero h1 ;
            h1.score = 5 ;
            h1 + 5 ; // print 25 as overloaded
            Hero *h2 = new Hero(5 + h1) ;
            cout << h2 << endl ;
            cout << h2->score << endl ;

            Hero h3{1,5} ; // aggregate in oop (C++)
            cout << h3.score << "  " << h3.temp << endl ;
    return 0;
}