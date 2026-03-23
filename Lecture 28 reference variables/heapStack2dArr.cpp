#include<iostream>
using namespace std ;
int main(){
    /*
    int n ;
    cout << "Enter n value to craete n*n size array  " ; 
    cin >> n;
    // CREATING 2D ARRAY USING DYNAMIC ALLOCATION(Heap memory )
    int** arr = new int* [n] ;     // ARRAY OF POINTERS
    for(int i = 0 ; i < n ; i++){
        arr[i] = new int[n] ;  // NEW ARRAY OF  BLOCKS(COLUMNS) 
    }
    // TAKING INPUT VALUES 
    for(int i = 0 ; i< n ; i++){
        for(int j = 0 ; j <n ; j++){
            cin >> arr[i][j] ;
        }
    }
    // PRINTING VALUES (Output)
     for(int i = 0 ; i< n ; i++){
        for(int j = 0 ; j <n ; j++){
            cout <<  arr[i][j] << " " ;
        }
        cout << endl ;
    }
    for(int i = 0 ; i < n ;i++)
        delete[]  arr[i] ;   // DEALLOCATING ROWS 

        delete[] arr ; // DEALLOCATING POINTER ARRAY 
        arr = nullptr ;
 int x ;
 cout << "Enter x value to create x*x size array" ;
 cin >> x ;
        arr = new int* [x] ;  // new pointer array
        for(int i = 0 ; i < x ; i++){
            arr[i] = new int [x] ;       // new rows 

        }
        for(int i = 0 ; i < x ; i++){
            for(int j = 0 ; j < x ; j++){
                cin >> arr[i][j] ;
            }
        }
         for(int i = 0 ; i < x ; i++){
            for(int j = 0 ; j < x ; j++){
                cout <<  arr[i][j]  << " " ;
            }
            cout << endl ; 
        }
        */
          // CREATING 2D ARRAY USING DYNAMIC ALLOCATION OF DIFFERENT ROWS AND COLUMS SIZE
          int rows , cols ;
          cout << "Enter number of rows " ;
          cin >> rows  ;
          cout << "Enter number of columns " ;
          cin >> cols ;
          int** app = new int* [rows] ;
          for(int i = 0 ; i < rows ; i++){
            app[i] = new int [cols] ;
          }
          cout << "Enter the values " << endl ;
          for(int i = 0 ; i < rows ; i++){
            for(int j = 0 ; j < cols ; j++){
                cin >> app[i][j] ;
            }
          }
           for(int i = 0 ; i < rows ; i++){
            for(int j = 0 ; j < cols ; j++){
                cout <<  app[i][j] << " ";
            }
            cout << endl ;
          }
            
          // RELEASING MEMORY
            for(int i = 0 ; i < rows ; i++)
            delete[] app[i] ;

            delete[] app ;
    return 0 ;
}