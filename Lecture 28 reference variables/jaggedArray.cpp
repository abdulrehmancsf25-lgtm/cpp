#include<iostream>
#include<vector>
using namespace std ;
int main(){
          // JAGGED ARRAY    USING HEAP MEMORY
          int n ;
          cout<< "Enter row size " ;
          cin >> n ;
        int** arr = new int*[n] ;
        vector<int> storColsize ;
        for(int i = 0 ; i < n ; i++){
            int cols ;
            cout << "Enter the column size ";
            cin >> cols  ;   
            storColsize.push_back(cols) ;
            arr[i] = new int[cols] ;
            for(int j = 0 ; j < cols ; j++ ){
                cin >> arr[i][j] ;
            }
            
        }
        
        // PRINTING ARRAY
        cout << "PRINTING JAGGED ARRAY " << endl ;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < storColsize[i] ; j++){
                cout << arr[i][j] << " " ;
            }
            cout << endl ;
        }
       // RELEASING MEMORY
       for(int i = 0 ; i <  n ; i++)
       delete[] arr[i] ;

       delete[] arr ;
    return 0 ;
}