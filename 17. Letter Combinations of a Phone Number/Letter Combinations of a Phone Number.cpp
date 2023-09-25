#include <bits/stdc++.h>
using namespace std;

void solve(vector<string> &ans , int index , string output, string digits , vector<string> mapping){
  // Base case
  if(index >= digits.length()){
    ans.push_back(output);
    return;
  }
  // solving 1 case 
  int digit = digits[index]-'0' ; // converting into int
  string value = mapping[digit];
  for(int i = 0 ; i < value.size(); i++){
    char ch = value[i];
    // include
    output.push_back(ch);
    // Recursion call
    solve(ans,index+1,output,digits,mapping);
    //backtracking
    output.pop_back();
  }
}
int main() {
  string digits = "23";
  vector<string> ans;
  //edgeCase if(digits.length()==0) return ans;
  int index = 0;
  string output = "";
  vector<string> mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
  solve(ans,index,output,digits,mapping);
  for(auto i : ans){
    cout<<i<<" ";
  }
  return 0;
}