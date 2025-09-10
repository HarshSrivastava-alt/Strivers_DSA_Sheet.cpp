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

APPROACH:-
-> Traverse the entire array and within it run a loop while element's are equal to 1 and store the count
-> Update the ans as max(ans,cnt)
*/

// CODE:-
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int maxConsecutiveOnes(vector<int>& nums){
    int maxcount=0;
    int count=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            count++;
        }else{
            maxcount=max(maxcount,count);
            count=0;
        }
    }
    return max(maxcount,count);
}
int main(){
    vector<int>nums={1,1,2,0,3,1,1,1,1};
    cout<<"Maximum number of consecutive 1's is:"<<maxConsecutiveOnes(nums)<<endl;
    return 0;
}
// TIME COMPLEXITY = O(N)
// SPACE COMPLEXITY = O(0)
