#include <bits/stdc++.h>
using namespace std;

bool backspaceCompare(string &s, string &t){
    stack<char>s1,s2;
    string str1,str2;
    int n = s.size();
    int m = t.size();
    for(int i = 0; i<n ; i++){
        if(s[i]=='#' && !s1.empty()){
           s1.pop();
        }
        else {
           s1.push(s[i]);
        }
    }

    for(int i = 0 ; i<m ; i++){
        if(t[i]=='#' && !s2.empty()){
          s2.pop();
        }
        else{
          s2.push(s[i]);
        }
    }

    while(!s1.empty()){
       str1.push_back(s1.top());
       s1.pop();
    }

    while(!s2.empty()){
       str2.push_back(s2.top());
       s2.pop();
    }

    return str1==str2;
    
}
int main() {
  string s = "ab#c";
  string t = "ad#c";
  cout<<backspaceCompare(s,t)<<endl;
  return 0;
}