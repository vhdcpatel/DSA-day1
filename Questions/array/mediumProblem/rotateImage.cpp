#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

void rotateBrutForce(vector<vector<int>>& matrix) {
  int n = matrix.size();
  int m = matrix[0].size();
  // Assign empty vector.
  vector<vector<int>> matrixAns(m, vector<int>(n));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      matrixAns[j][n - i - 1] = matrix[i][j];
    }
  }

  matrix = matrixAns;
}

void rotate(vector<vector<int>>& matrix) {
  int n = matrix.size();
  // int m = matrix[0].size();

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      swap(matrix[i][j], matrix[j][i]);
    }
  }

  for (int i = 0; i < n; i++) {
    reverse(matrix[i].begin(), matrix[i].end());
  }
}

int main() { return 0; }