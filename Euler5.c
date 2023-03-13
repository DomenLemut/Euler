#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int gcd(int a, int b);
int lcm(int a, int b);

int gcd(int a, int b) {
    int remainder;

    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int n = 1;
    for(int i = 2; i < 20; i++) {
        n = lcm(n, i);
    }

    printf("%d\n", n);
}