/*#include<iostream>
using namespace std;
int main () {
int n;
cin>>n;
int i=1;
while (i<=n)
{
    cout<<i<<" ";
    i=i+1;
}


int i=1;
int sum=0;
while (i<=n) {
sum=sum+i;
i=i+1;

}
cout<<"value of sum is"<<" "<<sum;


    return 0;
}
    
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i=2;
int sum=0;
while(i<=n)
{
sum=sum+i;
i=i+2;

}
cout<<"value of sum of even numbers is"<<" "<<sum;
return 0;
}
*/
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
/*
int i=2;
while(i<n){
if(n%i==0){
    cout<<"notprime for"<< i<<endl;
}
else{
    cout<<"prime for"<< i<<endl;
}
i=i+1;
}
*/
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){

        cout<<i;
        j=j+1;
    }
    cout<<endl;
i=i+1;
    }
        return 0;
    }







