#include <iostream>

void oddEvenSort(int **array, int length) {
    bool sorted = false;
    while (!sorted) {
        sorted = true;
        for (int i = 0; i < length - 1; i += 2) {
            if ((*array)[i] > (*array)[i + 1]) {
                std::swap((*array)[i], (*array)[i + 1]);
                sorted = false;
            }
        }
        for (int i = 1; i < length - 1; i += 2) {
            if ((*array)[i] > (*array)[i + 1]) {
                std::swap((*array)[i], (*array)[i + 1]);
                sorted = false;
            }
        }
    }
}

void printArray(int *array, int length) {
    for (int i = 0; i < length; i++) {
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;
}

int main(int argc, char **argv) {
    int *array = new int[]{10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    oddEvenSort(&array, 10);
    printArray(array, 10);

    return 0;
}
