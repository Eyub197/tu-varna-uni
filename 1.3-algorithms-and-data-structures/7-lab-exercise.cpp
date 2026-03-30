// int a[20][20]
// 3 < n <=20
// n = 4
// | 16 5  6  7
// | 15 4  1  8
// | 14 3  2  9
// | 13 12 11 10
//
// B[] = avg of a col
// C[] = odd max num even min num

#include <iomanip>
#include <iostream>
#include <utility>

using namespace std;

int getN() {
  int userInput;
  do {
    cout << "Enter a number n between 3 and 20: ";
    cin >> userInput;
  } while (userInput <= 3 || userInput > 20);
  return userInput;
}

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

void fillMatrix(int a[20][20], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      a[i][j] = 0;
    }
  }

  int r = 0, c = 0, dir = 0;
  int dr[] = {0, 1, 0, -1};
  int dc[] = {1, 0, -1, 0};

  for (int num = 1; num <= n * n; num++) {
    a[r][c] = num;
    int nextR = r + dr[dir];
    int nextC = c + dc[dir];

    if (nextR < 0 || nextR >= n || nextC < 0 || nextC >= n ||
        a[nextR][nextC] != 0) {
      dir = (dir + 1) % 4;
      nextR = r + dr[dir];
      nextC = c + dc[dir];
    }

    r = nextR;
    c = nextC;
  }
}

void fillArrayColAvarage(int array[20], int n, int matrix[20][20]) {
  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = 0; j < n; j++) {
      sum += matrix[j][i];
    }
    array[i] = sum / n;
  }
}

void fillArrayEvenOddNumInRow(int array[20], int n, int matrix[20][20]) {
  for (int i = 0; i < n; i++) {
    int maxOdd = matrix[i][0], minEven = matrix[i][0];
    array[i] = matrix[i][0];
    for (int j = 1; j < n; j++) {
      if (i % 2 == 0) {
        if (matrix[i][j] > maxOdd) {
          maxOdd = matrix[i][j];
          array[i] = maxOdd;
        }
      } else {
        if (matrix[i][j] < minEven) {
          minEven = matrix[i][j];
          array[i] = minEven;
        }
      }
    }
  }
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << (i == n - 1 ? "" : " ");
  }
  cout << endl;
}

void cocktailShakerSort(int array[20], int n) {
  bool swapped = true;
  int start = 0;
  int end = n - 1;
  while (swapped) {
    swapped = false;
    for (int i = start; i < end; i++) {
      if (array[i] > array[i + 1]) {
        swap(array[i], array[i + 1]);
        swapped = true;
      }
    }
    if (!swapped) break;
    end--;
    for (int i = end - 1; i >= start; i--) {
      if (array[i] > array[i + 1]) {
        swap(array[i], array[i + 1]);
        swapped = true;
      }
    }
    start++;
  }
}

void gnomSort(int array[20], int n) {
  int index = 0;
  while (index < n) {
    if (index == 0 || array[index] >= array[index - 1]) {
      index++;
    } else {
      swap(array[index], array[index - 1]);
      index--;
    }
  }
}

int main() {
  int n = getN();
  int colAvarage[20];
  int evenOddNumInRow[20];
  int a[20][20];
  fillMatrix(a, n);
  processMatrix(a, n);
  fillArrayColAvarage(colAvarage, n, a);
  fillArrayEvenOddNumInRow(evenOddNumInRow, n, a);
  cocktailShakerSort(colAvarage, n);
  cout << "Column avarage: ";
  printArray(colAvarage, n);
  gnomSort(evenOddNumInRow, n);
  cout << "Row even/odd: ";
  printArray(evenOddNumInRow, n);
}
