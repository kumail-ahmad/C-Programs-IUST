#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1;

    printf("Program to calculate the factorial of a number\n");
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
        return 0;
    }

    for (i = 1; i <= n; ++i) {
        fact *= i;
        if (i < n)
            printf("%d x ", i);
        else
            printf("%d = %llu\n", i, fact);
    }

    return 0;
}
