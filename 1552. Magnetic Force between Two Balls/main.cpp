#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &arr , int n , int m , int sol) {
       int count = 1;
       int position = arr[0];
       for(int i = 0; i<n ; i++){
          if(arr[i]-position>=sol){
             count ++;
             position = arr[i];
          }
          if(count == m ) return true;
       }

       return false;
}
int maxDistance(vector<int> &arr, int n , int m) {
    sort(arr.begin(),arr.end());
    int start = 0;
    int end = arr[n-1] - arr[0];
    int ans = -1;
    while(start<=end){
       int mid = start + (end - start) / 2;
       if(isPossible(arr,n,m,mid)){
          ans = mid;
          start = mid + 1;
       }
       else {
         end = mid - 1;
       }
    }
     return ans;
    
}
int main() {
  vector<int> arr = {1,2,3,4,7};
  int n = arr.size();
  int m = 3;
  int ans = maxDistance(arr,n,m);
  cout<<ans<<endl;
  return 0;
}