
#include "fib.h"
#include <stdio.h>
int fibonacci(int n) {
    if (n == 1)
        return 0;
    else {
        if (n == 2)
            return 1;
        else
            return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void sequencia(int n) {
    printf("Sequencia ate a posicao %i:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%i ", fibonacci(i));
    }
    printf("\n");   
}
