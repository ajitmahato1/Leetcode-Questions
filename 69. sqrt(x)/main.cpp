#include <bits/stdc++.h>
using namespace std;

int sqrt(int x){
     int start = 0;
     int end = x;
     int ans;
     while(start<=end) {
         int mid = start + (end - start) / 2 ;
         int64_t sqr = static_cast<int64_t> (mid) * mid;
         if(sqr==x) return mid;
         if(sqr>x){
            end = mid - 1;
         }
         else {
            ans = mid;
            start = mid + 1;
         }
     }
     return ans;
}
int main() {
  int x = 8;
  int ans = sqrt(x);
  cout<<ans<<endl;
  return 0;
}