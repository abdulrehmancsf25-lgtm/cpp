/* #include<iostream>
using namespace std;
void AP(int n){

cout << (3*n) + 7;
}


int main(){
int n;
cin >> n;
 AP(n);

    return 0;
}
*/
#include<iostream>
using namespace std;
int setbits(int n){

int ans=0;
while(n!=0){
    if(n&1){
        ans =ans + 1;
    }
    n=n >>1;
}
return ans ;
}
int main(){
int a ,b ;
cin >> a >> b;
a=setbits( a);
b=setbits( b);
cout <<" answer is " << a+b;

    return 0;
}