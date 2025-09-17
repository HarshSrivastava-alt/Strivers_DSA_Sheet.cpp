/*
Question:
Given an input string s, reverse the order of the words.
A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.
Return a string of the words in reverse order concatenated by a single space.
Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

Example:
Input: s = "the sky is blue"
Output: "blue is sky the"

Approach:
- Initialize an empty string 'ans' to store the reversed words.
- Initialize 'start' and 'end' variables to keep track of the start and end indices of each word.
- Iterate through the input string 's'.
- Ignore leading spaces by advancing the iterator 'i' until a non-space character is found.
- Set 'start' to the current index 'i'.
- Find the end index 'end' of the current word by advancing 'i' until a space or the end of the string is encountered.
- Extract the current word using the substr() function and store it in a temporary string 'temp'.
- Reverse the characters in 'temp'.
- Append 'temp' to 'ans' with a space delimiter.
- Reverse the characters in 'ans' to get the reversed order of words.
- Remove any leading or trailing spaces in 'ans'.
- Return the resulting string 'ans'.

Code:
*/
#include<iostream>
#include<stack>
#include<string>
using namespace std;
string reverseWords(string s) {
    stack<string> st;
    string word="";
    for(char c:s){
        if(c==' '){
            if(word!=""){
                st.push(word);
                word="";
            }
        }
        else{
            word+=c;
        }
    }
    if(word!="") st.push(word);
    string res="";
    while(!st.empty()){
        res+=st.top();
        st.pop();
        if(!st.empty()) res+=' ';
    }
    return res;
}
/*
Time Complexity: O(n), where n is the length of the input string 's'.
Space Complexity: O(n), where n is the length of the input string 's'.
*/
