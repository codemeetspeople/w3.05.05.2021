#include <stdio.h>


void merge(int array[], int lo, int mid, int hi) {
    int size = hi - lo;
    int temparray[size];
    int i = lo;
    int j = mid;
    int k = 0;

    for ( ; i < mid && j < hi; k++ ) {
        if ( array[i] < array[j] ) {
            temparray[k] = array[i];
            i += 1;
        } else {
            temparray[k] = array[j];
            j += 1;
        }
    }
    for ( ; i < mid; i++, k++ ) {
        temparray[k] = array[i];
    }
    for ( ; j < hi; j++, k++ ) {
        temparray[k] = array[j];
    }

    for ( int i = lo, k = 0; i < hi; i++, k++ ) {
        array[i] = temparray[k];
    }
}

void mergeSort(int array[], int start, int end) {
    int mid = (end + start) / 2;

    if ( start < mid ) {
        mergeSort(array, start, mid);
        mergeSort(array, mid, end);
        merge(array, start, mid, end);
    }
}

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}


int main() {
    int array[10] = {1, 8, 9, 3, 4, 2, 5, 6, 7, 10};

    mergeSort(array, 0, 10);
    arrayPrint(array, 10);

    return 0;
}