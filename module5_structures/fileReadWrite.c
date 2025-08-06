#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];


    fp = fopen("sample.txt", "w"); 
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter text to write to file: ");
    fgets(text, sizeof(text), stdin);
    fputs(text, fp);

    fclose(fp);
    printf("Data written to file successfully.\n");

    
    fp = fopen("sample.txt", "r"); 
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nReading content from file:\n");
    while (fgets(text, sizeof(text), fp) != NULL) {
        printf("%s", text);
    }

    fclose(fp);
    return 0;
}
