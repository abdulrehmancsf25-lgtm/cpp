#include <iostream>
using namespace std;
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