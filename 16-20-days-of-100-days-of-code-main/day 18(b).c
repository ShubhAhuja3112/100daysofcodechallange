#include<stdio.h>

int main()
{
    int a,b,temp;
    printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");
    printf("Enter the two numbers \n");
    scanf ("%d %d",&a,&b);
    
    while((a<=0) || (b<=0))
    {
    printf("Enter positive numbers\n");
    printf("Enter the two numbers \n");
    scanf ("%d %d",&a,&b);
    }
    
    while (b>0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    printf(" HCF is %d",a);
    return 0;
}
