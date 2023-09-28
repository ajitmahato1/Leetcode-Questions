#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &v , int n , int &ans , int currNum){
  //base case
  if(currNum == n+1){
    ans++;
    return;
  }
  for(int i = 1 ; i<=n ; i++){
    if(v[i]==0 && (currNum % i == 0 || i % currNum == 0)){
      v[i] = currNum;
      solve(v,n,ans,currNum+1);
      v[i] = 0; // backtraacking
    }
  }
}
int main() {
  int n = 2;
  vector<int> v(n+1);
  int ans = 0;
  solve(v,n,ans,1);
  cout<<ans<<" ";
  return 0;
}