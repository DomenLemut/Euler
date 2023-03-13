#include <stdio.h>
#include <stdbool.h>

bool moreDigits(long a, long b) {
    while(b != 0) {
        b /= 10;
        a /= 10;
    }
    if(a > 0)
        return true;
    return false;
}

int main() {
    long a = 3;
    long b = 2;
    long saveA;
    int count = 0;

    for(int i = 0; i < 1000; i++) {
        printf("a: %ld, b: %ld\n", a, b);
        saveA = a;
        a = saveA + 2 * b;
        b = saveA + b;

        //devide with the same dividers
        for(long i = 2; i < a && i < b; i++){
            if(a % i == 0 && b % a == 0){
                a /= i;
                b /= i;
            }
        }

        if(moreDigits(a, b))
            count++;
    }

    printf("%d\n", count);

    return 0;
}




