#include <iostream>
using namespace std;
class Hero{
          private:
          int current_Money;
          public:
          // unparametrized constructor 
           Hero(){
                  cout << this << endl ;
           }
           // parametrized constructor
           Hero(char Level,int health){
                cout << "this -> " << this << endl ;
                this -> Level = Level ;
                (*this).health = health ;
            }
          string name;
           int health;
           char Level;
           // setter
           void SetMoney(int money){
             current_Money = money ;
           }
           void view_Balance(){
              cout << name << endl ;
              cout << "Current Balance -> " << current_Money << endl ;
           }
            void getHealth(){
                cout << "Health : " << health << endl ;
            }
            void getLevel(){
                cout << "Level : "<< Level << endl ;
            }


};
int main() {
           // statically object creatrion
            Hero Tommy('A',95) ;
             cout << "Address : " << &Tommy << endl ;
            Tommy.SetMoney(INT_MAX);
            Tommy.name= "Tommy";
            Tommy.view_Balance() ;
            Tommy.getHealth() ;
            Tommy.getLevel() ;


            // dynamically object creation
            Hero *Lance = new Hero('B',100);
            cout << "Address : " << Lance << endl ;
            (*Lance).name = "Lance";
            Lance -> view_Balance() ;
            Lance->getHealth() ;
            Lance->getLevel() ;

    return 0;
}