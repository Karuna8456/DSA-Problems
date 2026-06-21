#include<iostream>
using namespace std;

int BinarySearch(vector<int> & arr, int target){
  int s =0;
  int e = arr.size()-1;

  while(s<=e){
    int mid = s + (e-s)/2;
    if(arr[mid] == target){
      return mid;
    }else if (arr[mid] < target){
      s = mid +1;
    }else{
      e = mid-1;
    }
  }
  return -1;
}

int main(){
  vector<int>arr1 = {-1, 0, 3, 4, 5, 9, 12};
  int target1 = 12;

  cout<<BinarySearch(arr1,target1);
}
