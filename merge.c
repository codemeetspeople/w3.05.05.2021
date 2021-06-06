#include <stdio.h>

void merge(int array[], int lo, int mid, int hi) {
    // your code should be here
}

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

int main() {
    int target[13] = {1, 2, 5, 5, 6, 7, 1, 3, 3, 4, 6, 7, 8};

    merge(target, 0, 6, 13);
    arrayPrint(target, 13);
    // 1 1 2 3 3 4 5 5 6 6 7 7 8

    return 0;
}