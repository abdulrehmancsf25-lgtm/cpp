/*#include<iostream>
using namespace std;
int main(){

int n;
cout<<" enter the value to be execute"<<endl;
cin >>n;
int i=1;
for(;;){ 
if(i<=n){
    cout<<i<<endl;
}
else{
    break;
}
    i++;
}

    return 0;
}

#include<iostream>
using namespace std;
int main()
/*{
for(int a=0,b=1;a>=0 && b>=1;a--,b--)

cout<<a<<" "<<b<<endl;


    return 0;
}
{
    int n;
    cin>>n;
int sum=0;
for(int i=1;i<=n;i++){
sum+=i;
}
cout<<sum<<endl;

    return 0;
}
    
#include<iostream> 
using namespace std;
int main(){
int n;
cin>>n;
int a=0;
int b=1;
cout<<a<<" "<<b<<" ";
for(int i=1;i<=n;i++){
    int nextnumber=a+b;
    cout<<nextnumber<<" ";
    a=b;
    b=nextnumber;
}


    return 0;
}
#include<iostream>
using namespace std;
int main(){
int n;
cout<< "enter the value of n"<<endl;
cin>>n;
bool isprime=1;
for(int i=2 ;i<n; i++){
    if(n%i==0){
    // cout<<"is not a prime nuber"<<endl;
        isprime=0;
        break;
    }
}
if(isprime==0){
    cout<<"is not a prime number";
}
else{
    cout<<"is a prime number";
}
    return 0;
}
#include<iostream>
using namespace std;
int main(){
for(int i=0;i<=15;i+=2){
    cout<<i<<" "<<endl;
    if( i&1 ){
        continue;
    }
    i++;
}


    return 0;
}
#include<iostream>
using namespace std;
int main(){
for(int i=0;i<5;i++){
    for(int j=i;j<=5;j++){
        if(i+j==10){
            break;
        }
        cout<<i<<" "<<j<<endl;
    }
}


    return 0;
}
#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n;
cin>>n;
int answer=0;
int i=0;
for( ; ;n=n>>1,i++){
int bit=n & 1;
answer=answer* pow(10,i) + bit   ;}

cout<< answer;
    return 0;
}
#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n;
cin>>n;
int i=0;
int answer=0;
for( ;n!=0;n=n/10,i++){
 int bit=n%10;
 if(bit==1){
    answer=answer+pow(2,i);
 }
}
cout<<answer;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the value"<<endl;

cin>>n;
switch(n%2){
case 0:cout<<"it is even"<<endl;
break;
case 1:cout<<"it is odd"<<endl;
break;
default:cout<<"it is default case"<<endl;
break;

}
    return 0;
}
#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"enter the value of a"<<endl;
cin>>a;
char op;
cout<<"enter the operation"<<endl;
cin>>op;
cout<<"enter the value of b"<<endl;
cin>>b;
switch(op){
case '+':cout<<a+b<<endl;
break;
case '-':cout<<a-b<<endl;
break;
case '*':cout<<a*b<<endl;
break;
case '/':cout<<a/b<<endl;
break;
case '%':cout<<a%b<<endl;
break;
default:cout<<"operation not applicable"<<endl;
}
    return 0;
}*/
    #include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the value"<<endl;
cin>>n;
if( n>=100){

switch(n % 100){
case( 0 ):cout<<"required 100 rupee notes are "<< n/100<<endl;
           break;

default: cout <<"required 100 rupee notes are "<< n/100<<endl;
break;}
}
 n = n % 100;

 if(n >= 50){
switch(n % 50){
    case 0 :cout<<"required 50 rupee notes are "<< n/50 << endl;
    break;
    default :cout<<"required 50 rupee notes are "<< n/50 << endl;
    break;
}
 }
n= n % 50;
if (n>=20){ 
    switch( n % 20){
     case 0: cout<< "required 20 rupee notes are "<< n/20<<endl;
     break;
     default : cout<< " reqired 20 rupee notes are "<< n/20<< endl;   
     break;
    }
}
n = n% 20;
if (n>=10){
    switch(n % 10){
        case 0 : cout << "required 10 rupee notes are " << n/10 <<endl;
        break;
        default :  cout << "required 10 rupee notes are " << n/10 <<endl;
        break;
    }
}

    return 0;
}