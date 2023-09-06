#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &nums,int target){
       vector<int> result;
       int n = nums.size();
       int i = 0;
       int j = i+1;
       while(i<j){
           if(nums[i]+nums[j]==target){
               result.push_back(i);
               result.push_back(j);
               break;
           }
           else if(j==n-1){
               i++;
               j = i+1;
           }
           else{
               j++;
           }
       }
       return result;
}
int main() {
  vector<int> arr = {3,2,4,15};
  int target = 18;
  vector<int> ans = solve(arr,target);
  for(auto val:ans){
    cout<<val<<" ";
  }
  return 0;
}