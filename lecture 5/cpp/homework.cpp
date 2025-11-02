/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
int alpha=n-i+1;
while(alpha){
    cout<<"*";
    alpha=alpha-1;
}
cout<<endl;
i=i+1;
    }
    return 0;
}
    
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i=1;
while(i<=n){
int space=i-1;
while(space){
    cout<<" ";
    space=space-1;
}
int alpha=n-i+1;
while(alpha){
    cout<<i;
    alpha=alpha-1;
}
cout<<endl;
i=i+1;

}
    return 0;
}
    
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
int space=n-i;
while(space){
    cout<<" ";
    space=space-1;
}
int j=1;
while(j<=i){
cout<<i;
j=j+1;
}
cout<<endl;
i=i+1;
    }

    return 0;
}
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int alpha=n-i+1;
        int j=1;
        while(alpha){
            cout<<j;
            alpha=alpha-1;
    j=j+1;
        }
    int apple=i-1;
    while(apple){
        cout<<"*";
        apple=apple-1;
    }
    int orange=i-1;
    while(orange){
        cout<<"*";
        orange=orange-1;
}
int cherry=n-i+1;
while (cherry ){
     cout<<cherry;
     cherry =cherry -1;   
    }
        cout<<endl;
        i=i+1;
    }


    return 0;
}