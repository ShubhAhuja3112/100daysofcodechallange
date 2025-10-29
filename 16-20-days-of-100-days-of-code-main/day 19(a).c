#include <stdio.h>

int main() 
{
    printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");
    int n,last,sum =0;
    printf("Enter n \n");
    scanf("%d",&n);

    while(n!=0)
    {
        last=n%10;
        n=n/10;
        sum+=last;
    }
    printf("%d",sum);
    return 0;
}
