#include <bits/stdc++.h>
using namespace std;

pair<int,int> solve(vector<int> &arr,int target){
  for(int i = 0 ; i<arr.size(); i++){
    for(int j = i+1 ; j<arr.size(); j++){
      if(arr[i]+arr[j]==target) return make_pair(i,j);
    }
  }
  return {-1,-1};
}
int main() {
  vector<int> arr = {3,2,4,15};
  int target = 6;
  pair<int,int> ans = solve(arr,target);
  cout<<ans.first<<" "<<ans.second<<endl;
  return 0;
}