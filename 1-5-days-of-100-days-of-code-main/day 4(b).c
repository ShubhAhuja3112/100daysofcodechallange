#include<stdio.h>

int main()
{
  int n;
  printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");
  int sum = 0;
  printf("Enter the value of n\n");
  scanf("%d",&n);
  for(int i=1; i<=n; i++)
    {
      sum += i;
    }
  printf("%d",sum);
     return 0;
}
