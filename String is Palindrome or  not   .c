#include <stdio.h>
#include <string.h>

int isPalindrome(char *str, int start, int end) {
    for (; start < end; start++, end--) {
        if (str[start] != str[end]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    if (isPalindrome(str, 0, len - 1)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}
