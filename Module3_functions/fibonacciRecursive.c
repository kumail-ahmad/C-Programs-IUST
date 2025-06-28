#include <stdio.h>

int fibno(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fibno(n - 1) + fibno(n - 2);
}

int main()
{
    int n = 5;
    printf("%d\n", fibno(n));
    return 0;
}
