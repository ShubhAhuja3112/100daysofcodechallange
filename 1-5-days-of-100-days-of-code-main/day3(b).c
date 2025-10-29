#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf(" a=%d\n b = %d\n", a, b);

    return 0;
}
