
#include <stdio.h>

#include <utility>
// A function implementing shaker sort.

void swap(int* a, int* b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void shakerSort(int a[], int n) {
  int i, j, k;
  for (i = 0; i < n;) {
    // First phase for ascending highest value to the highest unsorted index.
    for (j = i + 1; j < n; j++) {
      if (a[j] < a[j - 1]) swap(&a[j], &a[j - 1]);
    }
    // Decrementing highest index.
    n--;
    // Second phase for descending lowest value to the lowest unsorted index.
    for (k = n - 1; k > i; k--) {
      if (a[k] < a[k - 1]) swap(&a[k], &a[k - 1]);
    }
    // Incrementing lowest index.
    i++;
  }
}

void brickSort(int arr[], int n) {
  bool flag = false;
  while (!flag) {
    flag = true;
    for (int i = 1; i < n - 1; i = i + 2) {
      if (arr[i] > arr[i + 1]) {
        swap(&arr[i], &arr[i + 1]);
        flag = false;
      }
    }

    for (int i = 0; i < n - 1; i = i + 2) {
      if (arr[i] > arr[i + 1]) {
        swap(&arr[i], &arr[i + 1]);
        flag = false;
      }
    }
  }
}

void gnomeSort(int arr[], int n) {
  int index = 0;
  while (index < n) {
    if (index == 0) index++;
    if (arr[index] >= arr[index - 1])
      index++;
    else {
      swap(&arr[index], &arr[index - 1]);
      index--;
    }
  }
  return;
}

int main(void) {
  int array[5], i, j, temp, n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  printf("Enter %d numbers : ", n);

  for (i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  // exchange sort
  for (i = 0; i < (n - 1); i++) {
    for (j = (i + 1); j < n; j++) {
      if (array[i] > array[j]) {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }

  printf("Sorted array is : ");
  for (i = 0; i < n; i++) {
    printf(" %d ", array[i]);
  }

  return 0;
}
