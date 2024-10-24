#include <iostream>

void printArray(int *array, int size) {
  for (int i = 0; i < size; i++) {
    std::cout << array[i] << ' ';
  }
  std::cout << std::endl;
}

void quicksort(int **array, int size) {
  if (size <= 1) {
    return;
  }

  int pivot = (*array)[0];

  int leftCNT = 0;
  int rightCNT = 0;
  for (int i = 1; i < size; i++) {
    if (pivot < (*array)[i]) {
      rightCNT++;
      continue;
    }
    leftCNT++;
  }

  int *left = new int[leftCNT];
  int *right = new int[rightCNT];
  int leftIndex = 0;
  int rightIndex = 0;
  for (int i = 1; i < size; i++) {
    if (pivot < (*array)[i]) {
      right[rightIndex] = (*array)[i];
      rightIndex++;
      continue;
    }
    left[leftIndex] = (*array)[i];
    leftIndex++;
  }

  quicksort(&left, leftCNT);
  quicksort(&right, rightCNT);

  int index = 0;
  for (int i = 0; i < leftCNT; i++) {
    (*array)[index] = left[i];
    index++;
  }
  (*array)[index] = pivot;
  index++;
  for (int i = 0; i < rightCNT; i++) {
    (*array)[index] = right[i];
    index++;
  }

  delete[] left;
  delete[] right;
}

int main(int argc, char **arhv) {
  int *array = new int[]{7, 15, 3, 22, 9, 14, 6, 18, 25, 11};
  int size = 10;
  printArray(array, size);
  quicksort(&array, size);
  printArray(array, size);
  return 0;
}
