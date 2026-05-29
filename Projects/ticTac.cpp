
#include <iostream>
#define mid 1 
using namespace std;
void game_Start_Display(){
    cout << endl ;
    cout << "******************************************\n";
    cout << "*        TIC-TAC-TOE GAME                *\n";
    cout << "******************************************\n";
    cout << endl ;
}
void display_Win(char player){
     cout << "******************************************\n";
    cout << "*         PLAYER " << player << " WINS!                 *\n";
    cout << "******************************************\n";
}
void display_Draw(){
                     cout << "\n";
    cout << "******************************************\n";
    cout << "*         MATCH DRAW!                    *\n";
    cout << "******************************************\n";
}
void drawBoard(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        // Print the row values separated by |
        cout << " " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << "\n";
        
        // horizontal divider 
        if (i < 2) {
            cout << "---|---|---\n";
        }
    }
}
void computer_pl(char arr[3][3], bool check[9]) {
    // Take random column and row number to place input 
    int rowNo, colNo;
    bool place = true;
    while(place) {
        rowNo = rand() % 3;
        colNo = rand() % 3;
        // checking 1d boolean array for the availability of place 
        if(check[3 * rowNo + colNo] != true) {
            // placing computer input
            arr[rowNo][colNo] = 'O';
            check[3 * rowNo + colNo] = true;
            place = false;
        }
    }
        long long delay = 100000000;
        while(delay--);
    
}
bool check(char arr[][3] , int rows , char playerSign){
          // row check 
           for (int i = 0; i <  rows; i++) {
                if(arr[i][mid] == playerSign)
                   if(arr[i][mid -1] == arr[i][mid] && arr[i][mid] == arr[i][mid+1])
                    return true ;
           }
         // column check 
          for (int i = 0; i <  3; i++) {
           if(arr[mid][i] == playerSign)
           if(arr[mid-1][i] == arr[mid][i] && arr[mid][i] == arr[mid+1][i])
            return true ;
            
          }  
        // Main diagonal
        if(arr[mid][mid] == playerSign) {
        if(arr[mid-1][mid-1] == arr[mid][mid] && arr[mid][mid] == arr[mid+1][mid+1])
         return true ;
        
        // secondary diagonal
        if(arr[mid-1][mid+1] == arr[mid][mid] && arr[mid][mid] == arr[mid+1][mid-1])
          return true ;
        }
    // else
     return false ;
}
void start_Match( ){
                      char player = 'X', arr[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    drawBoard(arr); // drawing board 
    bool single_Pl ;
                        cout << "Press 1 for single player "<< endl ;
                        cout << "Press 2 for multiplayer " << endl ;
                        cin >> single_Pl ;
    int *count = new int(1), *input = new int; 
    bool temp[9] = {0};

    while(*count <= 9) {
        
        cout << "Player " << player << " turn " << endl;
        if(single_Pl && player == 'O')
         computer_pl(arr ,temp) ;
        else {
        cin >> *input;

      
        if (*input < 1 || *input > 9) {
            cout << " Invalid entry! Choose 1-9 " << endl;
            continue;
        }

        if(temp[*input - 1] == false) {
            arr[(*input - 1) / 3][(*input - 1) % 3] = player;
            temp[*input - 1] = true; 
        }
        else {
            cout << " Invalid place " << endl;
            continue; 
        }
    }
            // for delay between inputs 
             long long  delay = 100000000;
            while(delay--) ;
            drawBoard(arr);
            
            
            if(*count >= 5) {
                if(check(arr, 3, player)) {
                    display_Win(player) ;
                     delete count;
                     delete input;
                    return ;
                }
            }

            (*count)++; 

            if(player == 'X')
                player = 'O';
            else
                player = 'X';
                if(*count > 9) { // count  to > 9 to handle draw 
            display_Draw() ;
            break;
        }
        }
        
    delete count;
    delete input;
}
int main() {
            srand(time(0)) ;
               char  process  ;
              while(1){
                        game_Start_Display() ;
                        start_Match() ;
                        cout << "Press R to restart & E for exit " << endl ;
                        cin >> process ;
                        if(process == 'E' || process == 'e')
                        break ;
              }
             
   

    return 0;
}