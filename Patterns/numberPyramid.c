#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= i; k++) {
            printf("%d", k);
        }
        printf("\n");
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int k = 1; k <= i; k++) {
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}
