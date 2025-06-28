#include <stdio.h>

struct Student
{
    int data;
    struct Student *next;
};

int main()
{
    struct Student class1, class2;

    class1.data = 10;
    class1.next = &class2;

    class2.data = 20;
    class2.next = NULL;

    printf("class 1 data = %d\n", class1.data);
    printf("class 2 data = %d\n", class1.next->data);

    return 0;
}
