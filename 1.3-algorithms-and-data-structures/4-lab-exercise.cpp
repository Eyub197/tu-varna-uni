// int a[20][20]
// 3 < n <= 20
// n = 5
// | 5 5 5 5 5
// | 5 4 4 4 5
// | 5 4 3 4 5
// | 5 4 4 4 5
// | 5 5 5 5 5
// n = 6
// | 6 6 6 6 6 6
// | 6 5 5 5 5 5
// | 6 5 4 4 5 6
// | 6 5 4 4 5 6
// | 6 5 5 5 5 6
// | 6 6 6 6 6 6

#include <algorithm>
#include <iomanip>
#include <iostream>
using namespace std;

int getN() {
  int userInput;
  do {
    cout << "Enter a number n between 3 and 20: ";
    cin >> userInput;
  } while (userInput <= 3 || userInput > 20);
  return userInput;
}

void fillMatrix(int a[20][20], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int dist = i;
      if (j < dist) dist = j;
      if (n - 1 - i < dist) dist = n - 1 - i;
      if (n - 1 - j < dist) dist = n - 1 - j;
      a[i][j] = n - dist;
    }
  }
}

// void fillMatrix(int a[20][20], int n) {
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < n; j++) {
//       int distFromEdge = min({i, j, n - 1 - i, n - 1 - j});
//       a[i][j] = n - distFromEdge;
//     }
//   }
// }

void processMatrix(int a[20][20], int n) {
  cout << "\nMatrix:\n";
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << setw(4) << a[i][j];
    }
    cout << endl;
  }
  cout << endl;
}

int main() {
  int a[20][20];
  int n = getN();
  fillMatrix(a, n);
  processMatrix(a, n);
  return 0;
}
