#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MEJA 2000000

int main(){
    bool * arr = (bool*) malloc (MEJA);
    for(int i = 0; i < MEJA; i++) {
        arr[i] = false;
    }

    long sum = 0;

    for (int p = 2; p < MEJA; p++){
        if(arr[p] == false) {
            printf("%d\n", p);
            sum += (long)p;
        }

        for (int i = 2 * p;  i <= MEJA;  i += p) {
            arr[i] = true;
        }
    }

    printf("sum: %lu\n", sum);

    return 0;
}