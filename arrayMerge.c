#include <stdio.h>

void arrayMerge(int target[], int src1[], int len1, int src2[], int len2) {
    // your code should be here!
}

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

int main() {
    int src1[6] = {1, 2, 5, 5, 6, 7};
    int src2[7] = {1, 3, 3, 4, 6, 7, 8};
    int target[13];

    arrayMerge(target, src1, 6, src2, 7);
    arrayPrint(target, 13);
    // 1 1 2 3 3 4 5 5 6 6 7 7 8

    return 0;
}
