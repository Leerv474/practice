#include <iostream>

void merge(int array[], int start, int mid, int end) {
    int leftLen = mid - start + 1;
    int rightLen = end - mid;
    
    int *left = new int[leftLen];
    int *right = new int[rightLen];

    for (int i = 0; i < leftLen; i++) {
        left[i] = array[start + i];
    }
    for (int i = 0; i < rightLen; i++) {
        right[i] = array[mid + 1 + i];
    }

    int iLeft = 0;
    int iRight = 0;
    int iResult = start;

    // from rigth and left arrays elements one by one are put in their order
    while (iLeft < leftLen && iRight < rightLen) {
        if (left[iLeft] <= right[iRight]) {
            array[iResult] = left[iLeft];
            iLeft++;
        } else {
            array[iResult] = right[iRight];
            iRight++;
        }
        iResult++;
    }

    while (iLeft < leftLen) {
        array[iResult] = left[iLeft];
        iLeft++;
        iResult++;
    }
    while (iRight < rightLen) {
        array[iResult] = right[iRight];
        iRight++;
        iResult++;
    }

    delete[] left;
    delete[] right;
}

void mergesort(int array[], int start, int end) {
    if (start < end) {
        int mid = start + (end - start) / 2;
        mergesort(array, start, mid);
        mergesort(array, mid + 1, end);
        merge(array, start, mid, end);
    }
}


void printArray(int array[], int length) {
    for (int i = 0; i < length; i++) {
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;
}

int main(int argc, char* argv[]) {
    int array[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    mergesort(array, 0, 10);
    printArray(array, 10);
    return 0;
}
