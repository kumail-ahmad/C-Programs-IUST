#include <stdio.h>

int main() {
    int num, temp, rem, fact, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    int sum = 0;
    while (num > 0) {
        rem = num % 10;
        fact = 1;
        for (i = 1; i <= rem; i++) {
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }
    if (sum == temp)
        printf("Strong Number\n");
    else
        printf("Not a Strong Number\n");
    return 0;
}
