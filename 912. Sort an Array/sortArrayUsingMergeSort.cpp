#include <bits/stdc++.h>
using namespace std;

void mergeInPlace(vector<int> &nums, int start, int mid , int end){
  int total_len = end - start + 1;
  int gap = (total_len/2)+(total_len%2);
  while(gap>0){
    int i = start , j = start+gap;
    while(j<=end){
      if(nums[i]>nums[j]){
        swap(nums[i],nums[j]);
      }
      i++,j++;
    }
     gap = gap<=1 ? 0 : (gap/2)+(gap%2);
  }
}
void mergeSort(vector<int> &nums , int start , int end){
  if(start>=end) return;
  int mid = start + (end - start)/2;
  //RE call
  mergeSort(nums,start,mid);
  mergeSort(nums,mid+1,end);
  //merge function
  mergeInPlace(nums,start,mid,end);
}
int main() {
  vector<int> nums{5,2,3,1};
  int start = 0;
  int end = nums.size()-1;
  mergeSort(nums,start,end);
  for(auto i : nums){
    cout<<i<<" ";
  }
}