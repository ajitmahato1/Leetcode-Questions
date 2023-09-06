#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &nums,int target){
       unordered_map<int, int> numMap;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];
            if (numMap.count(complement)) {
                return {numMap[complement], i};
            }
            numMap[nums[i]] = i;
        }

        return {};
}
int main() {
  vector<int> arr = {3,2,4,15};
  int target = 6;
  vector<int> ans = solve(arr,target);
  for(auto val:ans){
    cout<<val<<" ";
  }
  return 0;
}