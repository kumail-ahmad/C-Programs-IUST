#include <stdio.h>

int main()
{
    char str[100];
    int vowels = 0, i;

    printf("Enter a word: ");
    scanf("%[^\n]", str); // reads spaces also

    for (i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowels++;
        }
    }

    printf("Vowels = %d\n", vowels);

    return 0;
}
