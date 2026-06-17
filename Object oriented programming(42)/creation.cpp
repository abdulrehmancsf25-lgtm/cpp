#include <iostream>
#include "myClass.cpp"
using namespace std;
class Hero{
           // properties
        private: //  only accessed in class
        int money ;

        public:  // can be accessed in class or out of class
        char level;
        int health ;
};
    // Access modifiers of class
    // Public
    // Private
    // Protected
int main() {
         Hero h1 ;
        h1.level = 'A' ;
        h1.health = 100 ;
        // size (in case of no data members size is by default 1 byte)
        cout << "size : " << sizeof(h1) << endl ;
    // Accessing properties /Data members
        cout << "Level is : " << h1.level << endl ;
        cout << "Health is :" << h1.health << endl ;

  //    Hero();
    return 0;
}