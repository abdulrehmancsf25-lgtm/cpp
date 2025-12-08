/*#include<iostream>
using namespace std;
int main(){
int alpha[14]={2,3,4};

int n=13;
for(int i=0;i<=n;i++){

    cout <<alpha[i] <<endl;
}
    return 0;
}*/
#include<iostream>
using namespace std;
void printarray(int array[] , int o){
for(int i=0; i<o ; i++){
cout<< array[i] << " ";
}

}
int main(){

    int n=5;
int arr[10]={2,3,5,7,9,11};
printarray(arr , n);
cout<< "print done"<< endl;
 int h=10;
int alpha[10]={2,3,5,7,9,11};
printarray(alpha , h);
cout<<"print done"<< endl;

return 0;
}