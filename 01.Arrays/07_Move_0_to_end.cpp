/*
QUESTION:-
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]

APPROACH:-
-> The idea is while traversing the array if we found any zero then we have to swap it with next non-zero
*/

// CODE:-
// function to find the next non-zero element
#include<iostream>
using namespace std;
int main(){
    int arr[] ={0,1,5,2,0,5,0,9,0, 0,1,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int j=n-1;
    for(int i=n-1;i>=0;i--){
        if(arr[i]!='0'){
            arr[j]=arr[i];
            j--;
        }
    }
    for(int i=0;i<=j;i++){
        arr[i]='0';
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
// TIME COMPLEXITY = O(N) (as we moving j throught the array only once)
// SPACE COMPLEXITY = O(0)
