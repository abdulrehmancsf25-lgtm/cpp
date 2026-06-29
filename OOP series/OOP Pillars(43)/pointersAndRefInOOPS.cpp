#include <iostream>
#include<cstring>
using namespace std;
// robject VS lobject 
// lobject has memory and address and remains until destroyed 
// robject is temporary and don't have memory address & destroys immediately 

class HEADOFFICE{
                public :
                char* name ;
                 const string capacity ;
                HEADOFFICE(string s) : capacity(s){
                    name = new char[50] ;

                }
                void setName(const char* s){
                     strcpy(name,s) ;

                }
                // below will never work const variables must be initialized first ot at initializer list time 
                // void setCapacity(const string s){
                //           cpacity = s ;
                // }

                // getters functions should always be const 
                void see_details () const {
                    cout << "Name : "<< name << endl ;
                    cout <<  capacity << endl ;
                } 
                // destructor
                ~HEADOFFICE(){
                   // cout << "Destructor called "<< endl ;
                    delete [] name;
                }
                
                
};
class sub_office : public HEADOFFICE{
                                    public:
                                    sub_office( char *Sname ,string capacity):HEADOFFICE(capacity){
                                                strcpy(name,Sname) ;  
                                    }
                            string dailyOrders ;
                //  const string &s can bind to robject 
                            void setDailyOrders(const string &s){
                                dailyOrders = s ;
                            }
                            void viewDaily_Orders(){
                                cout << "Avg daily orders : " << dailyOrders << endl ;
                            }
                                
};

  
int main() {

           // leftObject VS rightObject 
            int a = 10 ;
            // a is lobject 
            // 10 is r object 
            
         
            cout << endl ;
               HEADOFFICE lahore_Office("CAPCITY  = 50 ") ;
                char name[] = "TecHut" ;
               lahore_Office.setName(name) ;
            // see details 
            lahore_Office.see_details() ;
                  
            cout << endl ;
           char sub_name[] = "TecHut sub office ";
          // This will now work perfectly!
        sub_office SKP(sub_name, " CAPACITY = 35"); 
        SKP.see_details();
        SKP.setDailyOrders("70 at max ") ;
        SKP.viewDaily_Orders() ;
     
                            

    return 0;
}