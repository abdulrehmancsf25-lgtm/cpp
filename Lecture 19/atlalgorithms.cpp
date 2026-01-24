#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> app;
    app.push_back(3);
    app.push_back(2);
    app.push_back(7);
    app.push_back(8);
    app.push_back(10);
sort(app.begin() , app.end());

    cout <<"checking 7 through  binary search " <<  binary_search(app.begin() , app.end() ,7) <<endl;
    cout << " lower bound of 3 is at index" << lower_bound(app.begin() ,app.end() ,3 ) - app.begin() << endl;
    cout << " upper bound of 3 is at index " << upper_bound(app.begin(),app.end(),3) - app.begin() <<endl;
    int a = 5;
int b = 3;
cout<< " max value ->" << max(a,b)<<endl;
cout <<"min value->" << min(a,b)<<endl;
swap(a,b);
cout << "a is "<<a <<" b is "<<b <<endl;

string ap = "alpha" ;
reverse(ap.begin() , ap.end());
cout << ap <<endl;
vector<int> ok ;
ok.insert(ok.begin() ,{1,2,3,4,5});
rotate(ok.begin() , ok.begin() + 1 ,ok.end());
for (auto it : ok){
    cout << it << " " ;
}
    return 0;
}