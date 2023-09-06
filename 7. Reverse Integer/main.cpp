#include <bits/stdc++.h>
using namespace std;

int solve(int n){
  int result = 0;
  while(n){
    int dig = n%10;
    if(result>INT_MAX/10 || result<INT_MIN/10) return 0; //as per question integer range [-231, 231 - 1], then return 0
    result = (result*10)+dig;
    n = n/10;
  }
  return result;
}
int main() {
  int n = 3219278 ;
  int ans = solve(n);
  cout<<ans<<endl;
  return 0;
}