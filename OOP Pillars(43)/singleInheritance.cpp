#include <iostream>
using namespace std;
class animals{
            public:
              string name ;
               int legs ;
            protected:
            int height ; 
            public:
            void getName(){
                 cout << "Name : " << name << endl ; 
            }
            void getLegs(){
                cout << "Legs : " << legs << endl ;
            }
             
};
class cats:public animals{
                private:
                        string animal_type = "carnivores" ;
                public:
                cats( string name, int legs,int height){
                this -> name = name ;
                this -> legs = legs ;
                this -> height = height ;
            }
            void view_type(){
                 cout << animal_type << endl ;
            }
};

int main() {
             cats persian("Persian",4,2 ) ;
             persian.getName() ;
             persian.getLegs() ;
             persian.view_type() ;

                

    return 0;
}