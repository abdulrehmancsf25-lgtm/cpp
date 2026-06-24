#include <iostream>
using namespace std;
// vitual keyword used in child class because Mix class LAPTOP class 2 times
// Virtual keyboard share only 1 copy of LAPTOP class across all sub classes 
class LAPTOP{
            protected:
             string model ;
             int price ;
            public:
            int windows ;
        // initializer list 
        // const members are only initialized by initializer list not assignmrnt in constructor 
            LAPTOP(string model,int price , int Window): model(model),price(price),windows(Window){
                cout << "LAPTOP CONSTRUCTOR CALLED " << endl ;
            } 
             LAPTOP(){}
            void see_Details(){
                cout << endl ;
                cout << " LAPTOP  MODEL : " << model << endl;
                cout << " LAPTOP   PRICE : " << price << endl ;
                cout << " LAPTOP CURRENT WINDOWS : " << windows << endl ;
            }
};
class PC : virtual  public LAPTOP{
                        protected:
                        string  screen_size ;
                        public:
                        bool graphic_Card ;
        // if child class has an initializer parent constructot must be called explicitely 
        // other wise c++ automatically calls base class default constructor 
                        // PC(string Model,int Price ,int Window, string  sc_size,bool G_card):    screen_size(sc_size),graphic_Card(G_card){
                        //    this ->  model = model ;
                        //    this -> price  = price ;
                        //    this -> windows = Window ; 
                        //     cout << "PC CONSTRUCTOR CALLED "<< endl ;
                        // }
                        PC(string Model,int Price ,int Window, string  sc_size,bool G_card){
                              screen_size  = sc_size ;
                               graphic_Card = G_card ;
                               this ->  model = Model ;
                               this -> price  = Price ;
                               this -> windows = Window ; 

                        }
            void setModel(const string &model){
                this -> model = model ;

            }
            void see_Details() {          // override here
            cout << " PC MODEL : "        << model       << endl;
            cout << " PC PRICE : "        << price       << endl;
            cout << " PC WINDOWS : "      << windows     << endl;
            cout << " PC SCREEN SIZE : "  << screen_size << endl;
            cout << " PC GRAPHIC CARD : " << graphic_Card << endl;
        }

};
// MUTIPLE INHERITANCE & MULTILEVEL INHERITANCE 
class Mix : virtual  public LAPTOP,public PC{
                                      
};

int main() {
           LAPTOP lenovo("X1 YOGA",300000,10) ;
           lenovo.see_Details();
           cout << endl ;
           PC Gaming_PC("Core I7",300000,10,"20 * 50",true) ;
           cout << endl ;
           string modelis = "Core I3" ;
           Gaming_PC.setModel("Core I3") ;
           Gaming_PC.see_Details();


        
    return 0;
}