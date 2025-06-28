#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nStudents with marks > 60:\n");
    for (int i = 0; i < n; i++)
    {
        if (s[i].marks > 60)
        {
            printf("Name: %s, Roll: %d, Marks: %.2f\n", s[i].name, s[i].roll, s[i].marks);
        }
    }

    return 0;
}
