#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &candidates, int target, vector<int> &v, vector<vector<int>> &ans , int index){
  // base case
  if(target==0){
    ans.push_back(v);
    return;
  }
  if(target<0){
    return;
  }
  for(int i = index ; i<candidates.size(); i++){
    v.push_back(candidates[i]);
    solve(candidates,target-candidates[i],v,ans,i);
    //backtracking
    v.pop_back();
  }
}
int main() {
  vector<int> candidates = {2,3,5};
  int target = 8;
  vector<vector<int>> ans;
  vector<int> v;
  solve(candidates,target,v,ans,0);
  for(int i = 0 ; i<ans.size(); i++){
    for(int j = 0 ; j<ans[i].size(); j++){
      cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }
}