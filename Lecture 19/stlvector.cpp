#include<iostream>
#include<vector>
using namespace std ;
int main(){
    /*
       vector<int> v ;
cout <<" capacity "<< v.capacity() << endl ;
cout <<"size " << v.size() << endl ;
v.push_back(9);

v.push_back(4);
cout <<"capacity"<<  v.capacity() << endl ;
cout << v.at(0) << endl ;

v.push_back(3) ;
cout << " capacity" << v.capacity() << endl ;
cout << v.at(1) << endl  ;
v.push_back(7) ;
cout <<"capacity"<< v.capacity() << endl;

v.insert(v.begin() , {3,4,5});
for (int i = 0 ; i < v.size() ; i++){
    cout << v[i] << " " ;
}
cout << endl ;
cout << v.front() << endl;
// to remove an element from vector
v.pop_back();
for (int i = 0 ; i < v.size() ; i++){
    cout << v[i] << " " ;
}
     */ 
           vector<int> arr(5,3);
           for(int i = 0 ; i < arr.size() ;i++ ){
            cout << arr[i] << " " ;
           }
           cout << endl;
vector<int> last(arr) ;
 for(int i : last){
    cout << i << " ";
 }


    return 0 ;
}