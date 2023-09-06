#include <bits/stdc++.h>
using namespace std;

bool isPallindrome(string str, int start , int end){
   while(start<end){
    if(str[start]!=str[end]) return false;
    start++;
    end--;
   }
   return true;
}
string solve(string str){
  string ans ;
  int n = str.size();
  for(int i = 0 ; i<n ; i++){
    for(int j = i ; j<n ; j++){
      if(isPallindrome(str,i,j)){ //valid pallindrome check function
        string t = str.substr(i,j-i+1); //storing valid pallindrome
        ans = t.size()>ans.size() ? t : ans; //checking longest pallindrome and storing in ans
      }
    }
  }
  return ans;
}
int main() {
  string str = "cbbd";
  string ans = solve(str);
  cout<<ans<<endl;
  return 0;
}