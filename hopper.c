#include <stdio.h>

int main() {
    int maxJump, cell;
    unsigned long long ways[100];

    scanf("%d %d", &maxJump, &cell);

    for ( int i = 0; i < maxJump; i++ ) {
        ways[i] = 1 << i;
    }

    for ( int i = maxJump; i < cell; i++ ) {
        ways[i] = 0;

        for ( int j = i - maxJump; j < i; j++ ) {
            ways[i] += ways[j];
        }
    }

    printf("%llu\n", ways[cell-1]);

    return 0;
}
