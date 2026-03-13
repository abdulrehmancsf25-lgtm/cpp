#include<iostream>
using namespace std ;
/*
void update(int **ptr ){
    // ptr = ptr + 1 ; // NO EFFECT ON PT2 IN MAIN(IT IS VALID ONLY FOR FUNCTION (pass by value))
   // *ptr = *ptr + 1 ;  // changes the value(ADDRESS) at address stored in ptr which affects main pt1(means ptr)
       **ptr += 1 ;      // Changes the value of num in main 
}
void point(int *pt){
      *pt += 5 ;
  //    pt += 1 ;
  //s    cout <<"INSIDE FUNCTION "  << pt << endl ;
}
int main(){
    int num = 5 ;
    int *ptr = &num ;
    int **pt2 = &ptr ;
    cout << "BEFORE " << ptr << endl ;
    cout << "BEFORE value " << *ptr << endl ;
      point(ptr) ;
       cout <<"AFTER sc" << ptr << endl ;
    cout << "AFTER value " << *ptr << endl ;

    cout << endl ;
    cout << "num value  " << num << endl ;
    cout << "ptr " << ptr << endl ;
    cout << "pt2 " << pt2 << endl ;
    update(pt2) ;
    cout << "num value  " << num << endl ;
    cout << "ptr " << ptr << endl ;
    cout << "pt2 " << pt2 << endl ;
    // Char increment concept
    char ch = 'a' ;
    ch++ ;

    return 0 ;
}*/
                 
void update(int *p){
        *p += 5 ;
        cout << *p << endl ;

}
int main(){
    // IMP concept of passing num Address as pointer in function
    int num = 5 ;
    int *ptr = &num ;
    update(&num) ;
                    // QUESTION 
   int first = 110 ;
   int *p1 = &first ;
   int **p2 = &p1 ;
   //int second = (**p2)++ + 9 ;
    int second = **(p2)++ + 9 ;   //  IS DIFFERENT 
   cout << first << " " << second << endl ;


    return 0 ;
}