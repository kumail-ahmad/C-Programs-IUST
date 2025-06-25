#include <stdio.h>

int main() {
    int marks[5], i, total = 0;

    printf("Enter marks for 5 subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    printf("Total marks of the student: %d\n", total);

    return 0;
}
