#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> & nums, int start , int end){
  //base case
  if(start>=end) return nums[start];

  int maxLeftBorderSum = INT_MIN, maxRighttBorderSum = INT_MIN;
  int mid = start + (end - start)/2;
  //RE call
  int maxLeftSum = solve(nums,start,mid);
  int maxRightSum = solve(nums,mid+1,end);
  //Max Cross Border Sum
  int leftBorderSum = 0 , rightBorderSum = 0;
  for(int i = mid ; i>=start ; i--){
    leftBorderSum+=nums[i];
    if(leftBorderSum>maxLeftBorderSum) maxLeftBorderSum = leftBorderSum;
  }
  for(int i = mid + 1 ; i<=end ; i++){
    rightBorderSum+=nums[i];
    if(rightBorderSum > maxRighttBorderSum) maxRighttBorderSum = rightBorderSum;
  }
  int crossSum = maxLeftBorderSum + maxRighttBorderSum;
  return max(maxLeftSum,max(maxRightSum,crossSum));
}
int main() {
  vector<int> nums = {5,4,-1,7,8};
  int start = 0,end = nums.size()-1;
  int ans = solve(nums,start,end);
  cout<<ans<<" ";
  return 0;
}