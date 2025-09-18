/*
Question:
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".

Approach:
1. Sort the array of strings lexicographically.
2. Take the first and last string from the sorted array.
3. Compare each character of the first and last string until they don't match or the end of either string is reached.
4. Return the common prefix.

Time Complexity: O(N*M*log(N)), where N is the number of strings and M is the maximum length of the strings.
- Sorting the array of strings takes O(N*log(N)) time.
- Comparing the first and last string takes O(M) time.

Space Complexity: O(1)
- We use constant space.

Code:
*/
#include<iostream>
#include<string>
using namespace std;
string longestCommonPrefix(string strs[], int n) {
    if(n==0) return "";
    string prefix=strs[0];
    for(int i=1;i<n;i++){
        while(strs[i].find(prefix)!=0){
            prefix=prefix.substr(0,prefix.size()-1);
            if(prefix=="") return "";
        }
    }
    return prefix;
}
int main(){
    int n;
    cin>>n;
    string strs[n];
    for(int i=0;i<n;i++){
        cin>>strs[i];
    }
    cout<<longestCommonPrefix(strs,n);
}
