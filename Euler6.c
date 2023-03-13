#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int sum0, sum1 = 0;

    for(int i = 1; i <= 100; i++) {
        sum0 += (i * i);
        sum1 += i;
    }

    printf("%d\n", sum1 * sum1 - sum0);

    return 0;
}