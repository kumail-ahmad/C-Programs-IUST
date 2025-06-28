#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a number up to which you want to calculate the sum: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of first %d numbers is = %d\n", n, sum);

    return 0;
}
