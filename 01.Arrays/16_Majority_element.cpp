/*
QUESTION:-
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:

Input: nums = [3,2,3]
Output: 3

Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2

APROACH:-
-> Initialize two variables: candidate and count. Set candidate to the first element of the array, and count to 1.
-> Iterate through the array starting from the second element:
    If the current element is equal to the candidate, increment the count by 1.
    If the current element is different from the candidate, decrement the count by 1.
    If the count becomes 0, update the candidate to the current element and set the count to 1 again.
-> After the iteration, the candidate variable will hold the majority element.
Return the candidate as the result.
*/

// CODE:-
#include<iostream>
using namespace std;

int main(){
    int arr[]={1,1,2,4,1,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0,candidate=-1;

    for(int i=0;i<n;i++){
        if(count==0){
            candidate=arr[i];
        }
        if(arr[i]==candidate){
            count++;
        }
        else{
            count--;
        }
    } 
    count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==candidate){
            count++;
        }
    }
    if(count>n/2){
        cout<<"Majority Element: ";
        cout<<candidate<<endl;
    }
    else{
        cout<<"No Majority Element"<<endl;
    }
}

// TIME COMPLEXITY = O(N)
// SPACE COMPLEXITY = O(0)
