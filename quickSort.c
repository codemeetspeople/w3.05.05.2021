#include <stdio.h>

int partition(int array[], int start, int end) {
    int middle = (start + end) / 2;
    int pivot = array[middle];
    int tail = start;

    array[middle] = array[end];
    array[end] = pivot;

    for ( ; array[tail] < array[end]; tail++ );
    for ( int i = tail + 1; i < end; i++ ) {
        if ( array[i] < array[end] ) {
            pivot = array[i];

            array[i] = array[tail];
            array[tail] = pivot;
            tail += 1;
        }
    }

    pivot = array[tail];
    array[tail] = array[end];
    array[end] = pivot;

    return tail;
}

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

void quickSort(int array[], int start, int end) {
    int pivot;

    if ( end - start > 0 ) {
        pivot = partition(array, start, end);

        quickSort(array, start, pivot-1);
        quickSort(array, pivot+1, end);
    }
}

int main() {
    int array[10] = {1, 8, 9, 3, 4, 2, 5, 6, 7, 10};

    quickSort(array, 0, 9);
    arrayPrint(array, 10);

    return 0;
}
