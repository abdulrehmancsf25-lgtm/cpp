#include <iostream>
using namespace std;
// static keyword & scope resolution operator
class House {
              public:
              static int width_of_house ;
              // one method in c++ 17 
              inline static int length_of_plot = 50 ;
}; 
   // initialize outside the class (older method (valid))
   int House :: width_of_house = 70 ;

class A {
         public:
         void print(){
                 cout << " prorgrammers Hut  A class  " << endl ;
         }
} ;
class Acopy {
             public:
         void print(){
                 cout << " prorgrammers Hut  A copy class " << endl ;
         }
};
class B: public A , public Acopy {

};
int main() {
             cout << House :: length_of_plot << endl ;
             cout << House :: width_of_house << endl ;

            class A objA ;
            class B objB ;
         
            
            objB.A :: print() ;
            objB.Acopy :: print() ;
    return 0;
}