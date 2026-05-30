#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
void  solve(vector<int>& nums ,  vector<vector<int>> &ans ,int index ,vector<int> &output ){
    // base case 
     if(index >= nums.size()){
        ans.push_back(output) ;
        return ;
     }
    //  recursive calls
      // included
      output.push_back(nums[index]) ;
    solve(nums , ans , index+1 , output) ;
    output.pop_back() ;
    // excluded
    solve(nums , ans , index+1 , output) ;

}
int main() {
   
     vector<int> nums = {1,2,3} ;
        vector<vector<int>> ans ;
        int index = 0 ;
        vector<int> output ;
        solve(nums, ans ,index , output ) ;
       //printing the Power set 
            for( auto subset : ans){
                cout << '[' ;
                for(auto value : subset )
                 cout << value << ' ' ;
                   cout << "] " ;
            } 

    return 0;
}