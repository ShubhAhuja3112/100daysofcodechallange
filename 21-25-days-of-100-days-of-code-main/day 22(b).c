#include <stdio.h>

int main() 
{
int n;
float sum =1.00;
printf("Enter n \n");
scanf("%d",&n);

if(n==1)
{
    sum=1.00;
}
for(int i=2;i<=n;i++)
{
    sum=sum+((2*i-1)/(float) (2*i));
}
printf("%.2f",sum);
    return 0;
}
