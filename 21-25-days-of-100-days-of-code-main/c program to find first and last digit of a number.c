#include <stdio.h>

int main() 
{
  int n,first;
  printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");
  printf("Enter n:");
  scanf("%d",&n);
  int last=n%10;
  int temp=last;
  
  while (n>=10)
  {
      n=n/10;
  }
  first=n;
  printf("first digit is %d and last digit is %d",first,last);
    return 0;
}
