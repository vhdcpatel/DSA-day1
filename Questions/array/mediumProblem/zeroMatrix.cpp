#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

// My Approach.
void fillZeros(vector<vector<int>> &matrix, int n, int m, int rowNum,
               int colNum) {
  for (int i = 0; i < n; i++) {
    matrix[i][colNum] = 0;
  }
  for (int i = 0; i < m; i++) {
    matrix[rowNum][i] = 0;
  }
}

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
  set<pair<int, int>> zeroPositions;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (matrix[i][j] == 0) {
        zeroPositions.insert({i, j});
      }
    }
  }
  for (const auto &pos : zeroPositions) {
    fillZeros(matrix, n, m, pos.first, pos.second);
  }
  return matrix;
}

/*
To save space:
set<pair<int, int>> zeroPositions; // Store zero positions
set<int> processedRows, processedCols; // Keep track of processed rows and
columns if (processedRows.find(i) == processedRows.end() ||
processedCols.find(j) == processedCols.end()) { zeroPositions.insert({i, j}); //
Store zero position processedRows.insert(i); // Mark row i as processed
processedCols.insert(j); // Mark column j as processed
}
*/

/*
Method2:
- if element is zero then mark it with -1, and not for zeros.
- Then again iterate and set all the value which are -1 to 0.

*/
void markRow(vector<vector<int>> &matrix, int n, int m, int i) {
  // set all non-zero elements as -1 in the row i:
  for (int j = 0; j < m; j++) {
    if (matrix[i][j] != 0) {
      matrix[i][j] = -1;
    }
  }
}

void markCol(vector<vector<int>> &matrix, int n, int m, int j) {
  // set all non-zero elements as -1 in the col j:
  for (int i = 0; i < n; i++) {
    if (matrix[i][j] != 0) {
      matrix[i][j] = -1;
    }
  }
}

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
  // Set -1 for rows and cols
  // that contains 0. Don't mark any 0 as -1:

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (matrix[i][j] == 0) {
        markRow(matrix, n, m, i);
        markCol(matrix, n, m, j);
      }
    }
  }

  // Finally, mark all -1 as 0:
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (matrix[i][j] == -1) {
        matrix[i][j] = 0;
      }
    }
  }

  return matrix;
}

// Better approach.
// Mark just first element of row and column if any is zero in them, and then
// make them zero
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
  // vector<int> markRow(n,0); => matrix[0][..]
  // vector<int> markCol(m,0); => matrix[..][0]

  int col0 = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (matrix[i][j] == 0) {
        matrix[i][0] = 0;
        if (j != 0) {
          matrix[0][j] = 0;
        } else {
          col0 = 0;
        }
        // markRow[i] = 1;
        // markCol[j] = 1;
      }
    }
  }

  // First don't disturb the hash row and columns.
  for (int i = 1; i < n; i++) {
    for (int j = 1; j < m; j++) {
      if (matrix[0][j] == 0 || matrix[i][0] == 0) {
        matrix[i][j] = 0;
      }
    }
  }

  if (matrix[0][0] == 0) {
    for (int j = 0; j < m; j++) {
      matrix[0][j] = 0;
    }
  }

  if (col0 == 0) {
    for (int i = 0; i < n; i++) {
      matrix[i][0] = 0;
    }
  }

  return matrix;
}

int main() { return 0; }