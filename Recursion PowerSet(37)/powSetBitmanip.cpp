#include <iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
void solve(vector<int> nums  ,vector<vector<int>> &ans  ){
         //  int range = pow(2,nums.size())-1  ; OR
          int range = 1 << nums.size() ;
    
           for(int i = 0 ; i < range ; i++){
                   vector<int> output ;
                   int index = 0 ;
                   int element = i ;
                while(element != 0){
                                    if(element & 1)
                                                   output.push_back(nums[index++]);
                                    else
                                         index++ ;
                                    element >>= 1 ;
               }
                 ans.push_back(output) ;
           }
        }
int main() {
             vector<int> nums = {1,2,3} ;     
             vector<vector<int>> ans ;
            solve(nums , ans) ;
            //printing the Power set 
            for( auto subset : ans){
                cout << '[' ;
                for(auto value : subset )
                 cout << value << ' ' ;
                   cout << "] " ;
            } 
    return 0;
}