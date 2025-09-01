/*
QUESTION:-
Given an array A[] of size n. The task is to find the largest element in it.
Example:
Input:
n = 5
A[] = {1, 8, 7, 56, 90}
Output:
90
Explanation:
The largest element of given array is 90

APPROACH:-
-> Intialize the ans with starting element
-> Traverse the entire array and update the ans if the element is greater then ans
-> Finally, return the ans
*/
// CODE:-
#include<iostream>
using namespace std;
int main(){
    int arr[] = {15,48,3,248,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>temp){
            temp=arr[i];
        }
    }
    cout<<"Largest Element "<<temp;
}
// TIME COMPLEXITY = O(N)
// SPACE COMPLEXITY = O(0)
