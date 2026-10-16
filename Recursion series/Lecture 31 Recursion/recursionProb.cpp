// HOUSE ROBBERY PROBLEM CODEHELP ONE (problem)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(vector<int> &nums, int sum, int &ans, int index)
{
    // base case
    if (index >= nums.size())
    {
        ans = max(sum, ans);
        return;
    }

    for (int i = index; i < nums.size(); i++)
    {
        sum += nums[i];
        solve(nums, sum, ans, i + 2);
        sum -= nums[i];
    }
}
int main()
{
    vector<int> nums = {2, 7, 9, 3, 1};
    int ans = 0;
    int sum = 0;
    int index = 0;
    solve(nums, sum, ans, index);
    cout << ans;
    return 0;
}