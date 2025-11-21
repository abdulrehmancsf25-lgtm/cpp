#include<iostream>
using namespace std;
int maxvalue(int zeta[] , int n){
int maxnum = INT_MIN;
for (int i=0 ; i<n ; i++){
maxnum=max(maxnum,zeta[i]);
}
return maxnum;

}

int minvalue(int zeta[] ,int n){
int minnum =INT_MAX;
for (int i=0; i<n ; i++){
minnum=min(minnum,zeta[i]);
}
return minnum;

}

int main(){
    //size of array=n
int n;
cin >> n;
int zeta[1000];
for(int i=0 ; i<n ; i++) {
    cin >> zeta[i];
    
}
cout<< " minimum value of array is " <<minvalue(zeta , n) << endl;
cout << "maximum value of array is " << maxvalue(zeta , n) << endl;
    return 0;
}