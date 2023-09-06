#include <bits/stdc++.h>
using namespace std;


double ans,temp;
    int reverse(int x) {
        if(x>0){
          temp = x%10;
          if((double)INT_MAX/ans <= 10.0) return 0; //handling 32-bit integer range [-231, 231 - 1], then return 0
          ans = ans*10 + temp;
          return reverse(x/10);  
        }
        else{
            if(abs(x)>0){ // for negative nums
                return reverse(abs(x)) * (-1);
            }
            return ans;
        }
    }
int main() {
  int n = 3219278 ;
  int ans = reverse(n);
  cout<<ans<<endl;
  return 0;
}