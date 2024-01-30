#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.");
    } else {
        printf("Factorial of %d = %llu", num, factorial(num));
    }

    return 0;
}
