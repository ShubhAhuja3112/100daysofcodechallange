#include<stdio.h>
 
 int main()
 {
     int a,b,temp,num1,num2;
     printf("Enter the two numbers \n");
     printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");  
     scanf("%d %d",&a,&b );
     num1=a;
     num2=b;
     
     while(a<=0 || b<=0)
     {
         printf("Enter two positive  numbers \n");
         scanf("%d %d",&a,&b);
         num1=a;
         num2=b;
     }
     while (b!=0)
     {
         temp =b;
         b=a%b;
         a=temp;
     }
     
     printf("HCF is %d",a);
     printf("\nLCM is %d",(num1*num2)/a);
     return 0;
     
 }
