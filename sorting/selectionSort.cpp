#include <iostream>

void selectionSort(int **array, int length) {
    int min;
    for (int i = 0; i < length; i++) {
        min = i;
        for (int j = i; j < length; j++) {
            if ((*array)[j] < (*array)[min]) {
                min = j;
            }
        }
        if (min != i) {
            std::swap((*array)[i], (*array)[min]);
        }
    }
}

void printArray(int *array, int length) {
    for (int i = 0; i < length; i++) {
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;
}

int main(int argc, char* argv[]) {
    int *array = new int[]{10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    selectionSort(&array, 10);
    printArray(array, 10);
    return 0;
}
