#include <bits/stdc++.h>
using namespace std;

void permutationHelper(vector<int>&nums,vector<vector<int>> &ans,int start){
  //base case
  if(start==nums.size()){
    ans.push_back(nums);
    return;
  }
  unordered_map<int,bool> visited;
  for(int i = start ; i<nums.size(); i++){
    if(visited.find(nums[i]) != visited.end()){ // handling duplicates
      continue;
    }
    visited[nums[i]]=true; // marking true if already visited
    swap(nums[i],nums[start]);
    permutationHelper(nums,ans,start+1);
    swap(nums[i],nums[start]);
  }
}
int main() {
  vector<int> nums = {1,1,2};
  vector<vector<int>> ans;
  permutationHelper(nums,ans,0);
  for(int i = 0 ; i<ans.size(); i++){
    for(int j = 0; j<ans[i].size() ; j++){
      cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}