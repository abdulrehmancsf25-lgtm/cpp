#include<iostream>
using namespace std;

bool isprime(int n){
    cout<<"here";
for(int i=2 ; i<n ; i++){
if(n%i==0){
    return 0;
}
}
// cout<<"here2"
return 1;
} 
int main(){
int n;
cin >> n;
if(isprime(n)){
    cout<<"is a prime number"<<endl;
}
else {
    cout<<"not a prime number"<<endl;
}
    return 0;
}/*
#include<iostream>
using namespace std;
int update(int a){
    int ans = a*a;
    return ans;

}
int main(){
int a=2;
cout<< update(a) <<endl;
return 0;
}*/