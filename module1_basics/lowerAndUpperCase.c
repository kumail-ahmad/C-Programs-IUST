#include <stdio.h>

int main() {
    char n;
    printf("Enter your character: ");
    scanf(" %c", &n);  

    if (n >= 'a' && n <= 'z') {
        printf("The character entered is lowercase.\n");
    } else if (n >= 'A' && n <= 'Z') {
        printf("The character entered is uppercase.\n");
    } else {
        printf("The character is not an alphabet letter.\n");
    }

    return 0;
}
