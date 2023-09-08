#include <bits/stdc++.h>
using namespace std;

void removeOcu(string &s , string &part){
        int found = s.find(part);
        if(found != string::npos){
            //part string has been located
            string left_part = s.substr(0,found);
            string right_part = s.substr(found+part.size(),s.size());
            s = left_part + right_part;
            removeOcu(s,part);
        }
        else{
            //base case
            //all the occurance of part has been removed from s.
            return;
        }
    }
int main() {
  string s = "daabcbaabcbc";
  string part = "abc";
  removeOcu(s,part);
  cout<<s<<endl;
  return 0;
}