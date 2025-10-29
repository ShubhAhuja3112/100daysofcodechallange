#include<stdio.h>

int main()
{
    int n ,last,product=1;
    printf("Enter n \n");
    scanf("%d",&n);
    printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");    
    while(n!=0)
    {
        last=n%10;
        if(last%2==1)
        {
            product*=last;
        }
        n=n/10;
    }
    
    printf("%d",product);
    
    return 0;
}
