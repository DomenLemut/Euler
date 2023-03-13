#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int reverse(int n) {
    if(n % 10 == 0)
        return -1;
    int sum = 0;
    int x = n;

    while(x > 0) {
        sum *= 10;
        sum += (x % 10);
        x /= 10;
    }

    return sum;
}

bool oddDigits(int n) {
    int x = n;
    while(x > 0) {
        if(x % 2 == 0)
            return false;
        x /= 10;
    }

    return true;
}

// Driver Code
int main(){
    int n = 100000000;
    int count = 0;
    
    bool * arr = (bool*) malloc(n);

    for(int i = 0; i < n; i++) {
        if(arr[i])
            continue;

        else {
            int org = i;
            int rev = reverse(i);

            if(reverse(i) == -1) {
                continue;
            }

            if(oddDigits(org + rev)) {
                count++;
            } else {
                arr[rev] = true;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}

/*
ce obe stevili vsebujeta je sode, potem tudi zadnje vklucuje le sode
*/
