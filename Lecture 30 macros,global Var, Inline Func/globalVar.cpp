#include<iostream>
using namespace std ;
int volume = 5 ;   // Global variable for sharing BUT It is a bad practice not recommended
                   // As it can be changed by any function call and next function call may get different value 
void a(int& x ){
    volume += 2 ;
         cout << "volume in a : "<< volume << endl ;
}
int main(){
    cout << " volume is main : " << volume << endl ;
    a(volume) ;

    return 0 ;
}