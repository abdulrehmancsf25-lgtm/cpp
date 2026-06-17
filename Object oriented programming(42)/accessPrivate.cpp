#include <iostream>
#include "myClass.cpp"
using namespace std;

int main() {
            enemy Diaz ;
            Diaz.health = 85 ;
        cout << "Health is : " << Diaz.health << endl ;
        // Accessing private member
         Diaz.setLevel('B');
        cout << "Current level : " << Diaz.getLevel() << endl ;

    return 0;
}