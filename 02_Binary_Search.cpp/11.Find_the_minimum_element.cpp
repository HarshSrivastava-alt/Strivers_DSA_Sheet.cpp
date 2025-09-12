/*
QUESTION:
Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:

[4,5,6,7,0,1,2] if it was rotated 4 times.
[0,1,2,4,5,6,7] if it was rotated 7 times.

Given the sorted rotated array nums of unique elements, return the minimum element of this array.

APPROACH:
We can use the binary search approach to find the minimum element.
1. Initialize low = 0 and high = n-1, where n is the size of the array.
2. While low < high, calculate mid = low + (high - low) / 2.
3. If nums[mid] > nums[high], it means the minimum element is on the right side of mid, so update low = mid+1.
4. Otherwise, the minimum element is on the left side of mid or mid itself, so update high = mid.
5. After the loop ends, low will be pointing to the minimum element index.
6. Return nums[low] as the result.

CODE:
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={3,5,1,5,6,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0,high=n-1,mid;
    int ans=-1;
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]>=arr[0]){
            low=mid+1;
        }else{
            ans=mid;
            high=mid-1;
        }
    }
    cout<<ans;
}

// TIME COMPLEXITY: O(log n)
// SPACE COMPLEXITY: O(1)
