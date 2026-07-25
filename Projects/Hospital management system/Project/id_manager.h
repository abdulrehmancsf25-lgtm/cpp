#include<iostream>
#include<string>
#include<ctime>
#include<algorithm>
#include<cstdlib>
#include "rapidcsv.h"
using namespace std ;

class id_manager{
    private :
    static bool seeded;  
    public:

    bool is_patient_id(int id){
        // patient id formay : always start from 5 
        if(id < 0 ){
            cout << "ID cann't be negative! " << endl ;
             return false;
        }
         string temp = to_string(id) ;
         if(temp[0] -'0' != 5){
            cout << "Paient id starts from digit 5" << endl ;
            return false ;
         }
        cout << "ID generated successfully "  << endl ;
        return true ;
    }

    bool is_doctor_id(int id){
             // doctor id formay : always start from 1
        if(id < 0 ){
            cout << "ID cann't be negative! " << endl ;
             return false;
        }
        string temp = to_string(id) ;
        if(temp[0] - '0' != 1){
             cout << "Doctor id starts from digit 1" << endl ;
            return false ;
        }
           cout << "ID generated successfully "  << endl ;
    return true ;
    }
   
   
    void auto_generate_id(string type , int &id){

         if(!seeded){
        srand(time(0));
        seeded = true;
    }

    // opening records file 
    string filename ;
    if(type == "patient")
      filename = "patient_records.csv" ;
    else
       filename = "doctor_records.csv" ;

    rapidcsv::Document doc(filename , rapidcsv::LabelParams(-1,-1)) ;
    
    vector<string> total_ids = doc.GetColumn<string>(1) ;

    int new_id;
    int prefix = (type == "patient") ? 5 : 1;

    do {
        int random_part = rand() % 1000000;           // range [0, 999999]
        new_id = stoi(to_string(prefix) + to_string(random_part));
    }
    while  (find(total_ids.begin(), total_ids.end(), to_string(new_id)) != total_ids.end());
     id = new_id ;
     cout << " ID generated successfully!" << endl ;

    }

};
// initialising static member 
bool id_manager::seeded = false;