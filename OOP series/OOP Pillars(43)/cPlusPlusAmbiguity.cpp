#include <iostream>
using namespace std;
// when two parents have same function c++  ambiguity enters
class A{
        public:
        void print(){
            cout << " I'm a programmer" << endl;
        }
};
class B{
         public:
        void print(){
            cout << " I'm a programmer" << endl;
        }
};

class C:public A,public B{

};
int main() {
            cout << endl ;
            C object;
          //  object.print();   // cause ambiguity
          object.A :: print() ;
          cout << endl ;
          object.B::print();
    return 0;
}