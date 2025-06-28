#include <stdio.h>

int main()
{
    int n = 6;

    // Top half of the diamond
    for (int i = 1; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half of the diamond
    for (int i = n - 1; i >= 1; i--)
    {
        for (int k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        for (int l = 1; l <= 2 * i - 1; l++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
