/*
QUESTION:
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

Example 1:
Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]

Example 2:
Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]

APPROACH:
To solve this problem in-place, we can follow these steps:
1. Use two boolean variables, firstRowZero and firstColZero, to check if the first row and first column contain zeros initially.
2. Iterate through the matrix and if an element is zero, set the corresponding element in the first row and first column to zero.
3. Iterate through the matrix again, excluding the first row and first column. If an element in the first row or first column is zero, set the current element to zero.
4. Finally, based on the values in firstRowZero and firstColZero, set the first row and first column to zero if needed.

TIME COMPLEXITY: O(m * n), where m and n are the dimensions of the matrix.
SPACE COMPLEXITY: O(1), as we are using constant extra space.
*/
// CODE:
#include<iostream>
using namespace std;

int main(){
    int arr[3][3] = {{1, 2, 3}, {4, 0, 6}, {7, 8, 9}};
    int rows = 3, cols = 3;
    // Step 1: Mark rows and columns to be zeroed
    bool zeroRow[3] = {false}, zeroCol[3] = {false};
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(arr[i][j] == 0){
                zeroRow[i] = true;
                zeroCol[j] = true;
            }
        }
    }
    // Step 2: Zero out marked rows
    for(int i = 0; i < rows; i++){
        if(zeroRow[i]){
            for(int j = 0; j < cols; j++){
                arr[i][j] = 0;
            }
        }
    }
    // Step 3: Zero out marked columns
    for(int j = 0; j < cols; j++){
        if(zeroCol[j]){
            for(int i = 0; i < rows; i++){
                arr[i][j] = 0;
            }
        }
    }
    // Print the modified matrix
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
// TIME COMPLEXITY: O(m * n), where m and n are the dimensions of the matrix.
// SPACE COMPLEXITY: O(1), as we are using constant extra space.
