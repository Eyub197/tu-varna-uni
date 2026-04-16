// декларирайте матрица а[20][20]
// въведете цело число n (3 < n <= 20)
// Запълнет мартрицата a[n][n] по следната локига
//
// следната логика : n = 4
// | 4 | 4 | 4 | 4
// | 0 | 3 | 3 | 3
// | 0 | 0 | 2 | 2
// | 0 | 0 | 0 | 1
//
// n = 5
// 5 | 5 | 5 | 5 | 5
// 0 | 4 | 4 | 4 | 4
// 0 | 0 | 3 | 3 | 3
// 0 | 0 | 0 | 2 | 2
// 0 | 0 | 0 | 0 | 1

#include <iomanip>
#include <iostream>

using namespace std;

int getN() {
  int userInput;

  do {
    cout << "Enter a number n betaween 3 and 20: ";
    cin >> userInput;
  } while (userInput < 3 || userInput > 20);

  return userInput;
}

void populateMatrix(int matrix[20][20], int n) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (j >= i) {
        matrix[i][j] = n - i;
      } else {
        matrix[i][j] = 0;
      }
      cout << setw(4) << matrix[i][j] << " ";
    }
    cout << endl;
  }
}

int matrix[20][20];

const int n = getN();
populateMatrix(matrix, n);
int main() {}
