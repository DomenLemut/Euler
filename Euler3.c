#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define NUMBER 600851475143

int main() {
    long n = NUMBER;

    for (int i = 3; i <= 775147; i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }

    printf("\n");

    return 0;
}