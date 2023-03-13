#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define MIN 10000
#define MAX 998001

bool isPalindrome(int n);
bool isPalindromeRec(int n, int i);
bool isThreeDigitProduct(int n);

bool isPalindrome(int n) {
    int i = 1;
    while(i < n)
        i *= 10;
    i /= 10;
    
    return isPalindromeRec(n, i);
}

bool isPalindromeRec(int n, int i) {
    if(i == 1)
        return true;
    if(i == 10)
        return n % 10 == n / 10;

    if(n % 10 == n / i)
        return isPalindromeRec((n % i) / 10, i / 100);
    
    return false;
}

bool isThreeDigitProduct(int n) {
    int i, j;

    for(i = 999; i >= 100; i--) {
        j = n / i; 

        if (j > 100 && j < 999 && i * j == n) {
            printf("%d = %d * %d\n", n, i, j);
            return true;
        }
    }

    return false;
}

int main() {
    for(int i = MAX; i >= MIN; i--) {
        if(isPalindrome(i) && isThreeDigitProduct(i)) {
            return 0;
        }
    }
    return 0;
}