#include <stdio.h>

int main() {
    char name[50];
    float math, eng, sst, urdu, percentage;

    printf("Enter the name of the student: ");
    scanf("%s", name);

    printf("Enter obtained marks in MATH: ");
    scanf("%f", &math);
    printf("Enter obtained marks in ENGLISH: ");
    scanf("%f", &eng);
    printf("Enter obtained marks in SST: ");
    scanf("%f", &sst);
    printf("Enter obtained marks in URDU: ");
    scanf("%f", &urdu);

    percentage = (math + eng + sst + urdu) / 4;

    printf("%s has obtained %.2f percent and has %s\n", name, percentage, (percentage >= 33) ? "passed" : "failed");

    return 0;
}
