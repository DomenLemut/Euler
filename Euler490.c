#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

long f (long n) {
    //(2 ^ n) mod 10⁹ - 2

    int x = 1;

    for(int i = 0; i < n - 2; i++) {
        x *= 2;
        x %= 1000000000;
    }

    return x - 2;
}

// Driver Code
int main(){
    printf("%lu\n", f(40));
    return 0;
}
