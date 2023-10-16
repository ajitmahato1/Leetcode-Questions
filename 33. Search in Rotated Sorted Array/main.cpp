#include <bits/stdc++.h>
using namespace std;

int findPivot(vector<int> &arr) {
     int start = 0;
     int end = arr.size()-1;
     while(start<=end) {
         int mid = start + (end - start) / 2 ;
         if(start==end) return start;
         if(mid+1<=end && arr[mid+1]<arr[mid]) return mid;
         if(mid-1<=start && arr[mid-1] > arr[mid]) return mid - 1;
         if(arr[start]>arr[mid]) {
             end = mid - 1;
         }
         else {
             start = mid + 1;
         }
     }

     return -1;
}

int binarySearch(vector<int> &arr , int start , int end , int target) {
      while(start<=end) {
         int mid = start + (end - start)/2;
         if(target==arr[mid]) return mid;
         if(target<arr[mid]){
             end = mid - 1;
         }
         else {
           start = mid + 1;
         }
      }

      return -1;
}

int main() {
  vector<int> arr = {4,5,6,7,0,1,2};
  int n = arr.size();
  int target = 0;
  int pivot = findPivot(arr);
  int ans = -1;
  if(target>arr[0] && target<arr[pivot]) {
         ans = binarySearch(arr,0,pivot,target);
  }
  else {
      ans = binarySearch(arr,pivot+1,n-1,target);
  }
  cout<<"Target found at : "<<ans<<endl;
  return 0;
}