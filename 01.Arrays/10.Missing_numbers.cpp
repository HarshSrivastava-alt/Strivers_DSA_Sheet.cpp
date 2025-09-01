/*
QUESTION:-
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

Example 1:

Input: nums = [3,0,1]
Output: 2
Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
Example 2:

Input: nums = [0,1]
Output: 2
Explanation: n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.
*/

/*
APPROACH:-
-> Calculate the optimum sum i.e. sum when all elements were present
-> Calculate the actual array's sum
-> Return the optimum sum - actual sum
*/

// CODE:-
#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int total = (n+1)*(n+2)/2;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"The Missing Number is: "<<total-sum;
}

// TIME COMPLEXITY = O(N)
// SPACE COMPLEXITY = O(0)
