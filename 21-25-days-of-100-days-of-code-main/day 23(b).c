#include <stdio.h>

int main() 
{
    int n;
    float sum =0.00;
    printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");
    printf("Enter n  : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        sum += ((2*i)/(float)(4*i-1));
    }
    printf("%.2f",sum);
    
    
    return 0;
}
