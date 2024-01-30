#include <stdio.h>
#include <math.h>
int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}
int isArmstrong(int number) {
    int originalNumber, remainder, result = 0, n;
    originalNumber = number;
    n = countDigits(number);
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }
    return (result == number);
}
int main() {
    int number;
    printf("Enter a number to check if it is an Armstrong number: ");
    scanf("%d", &number);
    if (isArmstrong(number))
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);
    return 0;
}

