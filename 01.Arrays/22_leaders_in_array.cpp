/*
QUESTION:-

Given an array A of positive integers. Your task is to find the leaders in the array. An element of the array is a leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader.

Example 1:
Input:
n = 6
A[] = {16,17,4,3,5,2}
Output: 17 5 2
Explanation: The first leader is 17 as it is greater than all the elements to its right. Similarly, the next leader is 5. The rightmost element is always a leader, so it is also included.

APPROACH:-

To find the leaders in the array, we can follow these steps:

1. Initialize a variable `maxRight` with the rightmost element of the array.
2. Iterate the array from right to left:
   - If the current element is greater than or equal to `maxRight`, it is a leader. Print the current element and update `maxRight` to the current element.
3. Finally, print `maxRight` as it is always a leader.

*/
// CODE:
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
       int arr[] ={13,17,5,4,2,6,1};
       int n = sizeof(arr)/sizeof(arr[0]);
       vector<int >leaders;
       int max_from_right = arr[n-1];
       leaders.push_back(max_from_right);
       for(int i=n-2;i>=0;i--){
              if(arr[i]>max_from_right){
                max_from_right=arr[i];
                leaders.push_back(max_from_right);
              }
       }
        reverse(leaders.begin(),leaders.end());
        cout<<"Leaders in the array are: ";
        for(int i=0;i<leaders.size();i++){
             cout<<leaders[i]<<" ";
        }
        cout<<endl;
}
// TIME COMPLEXITY: O(n), where n is the size of the array.
// SPACE COMPLEXITY: O(1)
