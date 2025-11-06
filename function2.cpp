#include<iostream>
using namespace std;
int factorial(int n){
int fact =1;
for(int i=1; i<=n ;i++ ){
fact = fact * i ;

}
return fact;

}
int nCr(int n ,int r){
int numerator=factorial(n);
int den= factorial (n-r) * factorial(r);
int answer=numerator/den;
return answer;
}
int main(){
int n ;
int r;
cin>> n >> r;
cout<< "n combination r is "<< nCr(n , r);

}