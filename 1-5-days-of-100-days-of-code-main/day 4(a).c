#include<stdio.h>

int main()
{
  int a,b;
  printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");
  printf("Enter the numbers\n");
  scanf("%d %d",&a,&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf(" a=%d \n b=%d",a,b);

return 0;
}
