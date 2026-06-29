#include <iostream>
#include<cstring>
using namespace std;
class Humans{
             public:
             char *name  ;
              Humans() {                          // constructor
        name = new char[50];
        strcpy(name, "Hello");          // ✅ runs on object creation
    }
             string color;
             int height  = 6 ;
             int weight ;
            void getHeight(){
                cout << "HEIGHT : " << height << endl ;
            }
            protected:
            int level ;
            
            
};
class Male:public Humans{
                        public:
                        void getLevel(){
                            cout << " Level is : "<<  level ;

                        }
                        public:
                          void setHeight(int height){
                              this-> height = height ;
                          }
                        
                        
};
int main() {
            Humans African;
                        
                        cout << African.name << endl ;
            Male person1;
                       cout << person1.name << endl ;
            cout << endl ;
            person1.name[0] ='B';
             cout << African.name << endl ;
               cout << person1.name << endl ;
            person1.getLevel();
    return 0;
}