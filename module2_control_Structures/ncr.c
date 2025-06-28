#include <stdio.h>

int factCal(int n, int r) {
    int nfact = 1, rfact = 1, diff_fact = 1;

    for (int i = 1; i <= n; i++)
        nfact *= i;

    for (int i = 1; i <= r; i++)
        rfact *= i;

    for (int i = 1; i <= n - r; i++)
        diff_fact *= i;

    return nfact / (rfact * diff_fact);
}

int main() {
    printf("%d\n", factCal(8, 2));
    printf("%d\n", factCal(6, 3));
    return 0;
}
