#include <stdio.h>

union Data
{
    int i;
    float f;
    char str[20];
};

int main()
{
    union Data d;

    d.i = 10;
    printf("Integer: %d\n", d.i);

    d.f = 3.14;
    printf("Float: %.2f\n", d.f);

       snprintf(d.str, sizeof(d.str), "Kumail");
    printf("String: %s\n", d.str);

    return 0;
}
