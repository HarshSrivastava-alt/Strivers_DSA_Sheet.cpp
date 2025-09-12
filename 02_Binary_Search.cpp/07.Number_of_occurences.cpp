/*
QUESTION:
Given a sorted array Arr of size N and a number X, you need to find the number of occurrences of X in Arr.

Example:

Input:
N = 7, X = 2
Arr[] = {1, 1, 2, 2, 2, 2, 3}
Output: 4
Explanation: 2 occurs 4 times in the given array.
Example 2:

Input:
N = 7, X = 4
Arr[] = {1, 1, 2, 2, 2, 2, 3}
Output: 0
Explanation: 4 is not present in the given array.
*/

/*
APPROACH:
1. Use binary search to find the first occurrence of the target element.
2. Use binary search to find the last occurrence of the target element.
3. Return the difference between the indices of the first and last occurrence + 1.

CODE:
*/
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={5,7,7,8,8,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;
    int low=0,high=n-1,mid;
    int first=-1,last=-1;
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]==x){
            first=mid;
            high=mid-1;
        }
        else if(arr[mid]<x){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    low=0,high=n-1;
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]==x){
            last=mid;
            low=mid+1;
        }
        else if(arr[mid]<x){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    if(first==-1 && last==-1){
        cout<<0;
    }else{
        cout<<last-first+1;
    }
}
// TIME COMPLEXITY: O(log N), where N is the size of the array.
// SPACE COMPLEXITY: O(1).
