#include <stdio.h>

int main() 
{
    printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");
    for (int i=1;i<=5;i++)
    {
        int a=1;
        for(int j=1;j<=i;j++)
        {
            printf("%d",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
