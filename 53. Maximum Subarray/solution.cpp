#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> & nums){
  int bag = 0;
  int n = nums.size();
  int maxSeen = INT_MIN;
  for(int i = 0 ; i<n ; i++){
    bag+=nums[i];
    if(bag>maxSeen){
       maxSeen = bag;
    } 
    if(bag<0) bag = 0;
  }
  return maxSeen;
}
int main() {
  vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
  int ans = solve(nums);
  cout<<ans<<" ";
  return 0;
}