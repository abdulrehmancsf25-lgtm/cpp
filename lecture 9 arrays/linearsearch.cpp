#include<iostream>
using namespace std;
bool check(int omg [] , int n , int value){
for (int i=0 ; i<n ; i++){
if ( omg[i]==value ){
    return 1;
}
}
return 0 ;
}

int main(){
int omg[10]={5,-5,15,5,-10,20,10,-15,5,50};
cout << "enter the value to be found" << endl;
int value;
cin>> value;
bool founded = check(omg , 10 , value );
if (founded){
    cout << " given value is present in array"<<endl;
}
else{
    cout << " given value not founded in whole array" << endl;
}

}