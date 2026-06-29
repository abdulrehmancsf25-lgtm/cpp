#include <iostream>
using namespace std;
class animals{
            public:
              string name ;
               int legs  = 4 ;
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
               
            void view_type(){
                 cout << animal_type << endl ;
            }
};
class persian:public cats{
                             
};

int main() {
            // persian class inherits cats class & cats class inherits animals class
             cats PakCats ;
               PakCats.getLegs() ;
             persian cat1 ;
               cat1.getLegs() ;
                

    return 0;
}