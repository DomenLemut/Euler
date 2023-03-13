#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 4000000

int main() {
    long sum = 0; //sum of even values

    int first = 1;
    int second = 1;

    while(second < MAX) {
        second += first;
        first = second - first;

        if(second % 2 == 0) {
            sum += (long) second;
        }
    }

    printf("%lu\n", sum);
}