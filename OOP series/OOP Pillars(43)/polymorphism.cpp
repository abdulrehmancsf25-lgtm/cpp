#include <iostream>
using namespace std;
                    // POLYMORPHISM
                    // 1- COMPILE TIME POLYMORPHISM
// FUNCTION OVERLOADING
// OPERATOR OVERLOADING
class A{
        public:
        void print() const{
            cout << "I'm a programmer  of const function " << endl << endl ;
        }
        void print(){
            cout << "I'm a programmer of non-const function " << endl << endl ;
        }
};

class B{     
            // change parameters to overload function 
        public:
         void print(){
                 cout << " name : " << endl ;
         }
         void  print(int n ){
                    cout << " name : " << endl ;
                    
         }
          void print(string name){
              cout << " name : "  << name << endl ;
          }
};

int main() {
          const A mini ; // const object calls const function (const function overloads)
            mini.print();
          A mini2;
          mini2.print() ;

        B maxi;
        maxi.print() ; // works fine 
        maxi.print(3) ; // works fine
        maxi.print("abdul") ;
    return 0;
}