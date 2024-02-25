#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrderOptimized(vector<vector<int>>& matrix) {
  vector<int> ans;
  int numRows = matrix.size();
  int numColms = matrix[0].size();

  int total = numRows * numColms;
  int count = 0;

  // setting four indexs:
  int startingRow = 0;
  int startingCol = 0;
  int endingRow = numRows - 1;
  int endingCol = numColms - 1;

  while (count < total) {
    // print starting row:
    for (int i = startingCol; count < total && count < total && i <= endingCol;
         i++) {
      ans.push_back(matrix[startingRow][i]);
      count++;
    }
    startingRow++;

    // print ending columns:
    for (int i = startingRow; i <= endingRow; i++) {
      ans.push_back(matrix[i][endingCol]);
      count++;
    }
    endingCol--;

    // printing ending row:
    for (int i = endingCol; count < total && i >= startingCol; i--) {
      ans.push_back(matrix[endingRow][i]);
      count++;
    }
    endingRow--;

    // printing starting columns:
    for (int i = endingRow; count < total && i >= startingRow; i--) {
      ans.push_back(matrix[i][startingCol]);
      count++;
    }
    startingCol++;
  }

  // count<total &&
  return ans;
}

vector<int> spiralMatrix(vector<vector<int>>& MATRIX) {
  vector<int> ans;
  int top = 0, left = 0;
  int bottom = MATRIX.size() - 1;
  int right = MATRIX[0].size() - 1;
  while (top <= bottom && left <= right) {
    // For -->
    for (int i = left; i <= right; i++) {
      ans.push_back(MATRIX[top][i]);
    }
    top++;
    // For downward end;
    for (int i = top; i <= bottom; i++) {
      ans.push_back(MATRIX[i][right]);
    }
    right--;
    if (top <= bottom) {
      // for <--
      for (int i = right; i >= left; i--) {
        ans.push_back(MATRIX[bottom][i]);
      }
      bottom--;
    }
    if (left <= right) {
      // for upward.
      for (int i = bottom; i >= top; i--) {
        ans.push_back(MATRIX[i][left]);
      }
      left++;
    }
  }
  return ans;
}

int main() { return 0; }