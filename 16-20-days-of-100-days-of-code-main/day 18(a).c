#include <stdio.h>

int main()
{
    
    int n ;
    printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");
    printf("Enter n \n");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d \n",i);
        }
    }
    return 0;
}
