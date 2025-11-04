#include<iostream>
using namespace std;
int power (){
int a ,b ;
cin >>a >> b ;
int answer=1;
for(int i=1 ; i<=b ; i++){
     answer = answer * a;
}
return answer;
}
int main(){
/*int a , b ;
cin >> a >> b ;
int answer =power(a,b);
cout << "answer is " << answer <<endl;

int c , d ;
cin >> c >> d ;
 answer =power(c,d);
cout << "answer is " << answer <<endl;*/
int answer=power();
cout<<"answer is "<< answer <<endl;
answer=power();
cout<<"answer is "<< answer <<endl;
 answer=power();
cout<<"answer is "<< answer <<endl;


}