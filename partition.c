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

int main() {
    int array[10] = {3, 9, 2, 8, 6, 4, 1, 10, 5, 7};


    return 0;
}

