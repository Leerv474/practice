#include <iostream>

void bubbleSort(int **array, int length) {
    bool sorted = false;
    for (int i = 0; i < length; i++) {
        for (int j = i; j < length - 1; j++) {
            if ((*array)[j] < (*array)[j + 1]) {
                std::swap((*array)[j], (*array)[j + 1]);
                continue;
            }
            sorted = true;
        }
        if (sorted == true) {
            break;
        }
    }
}

void printArray(int *array, int length) {
    for (int i = 0; i < length; i++) {
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;
}

int main() {
    int *array = new int[]{10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    bubbleSort(&array, 10);
    printArray(array, 10);
    return 0;
}
