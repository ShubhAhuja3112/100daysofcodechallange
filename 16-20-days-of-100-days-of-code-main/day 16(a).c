#include <stdio.h>

int main() {
    int n ;
    int last,rev =0 ;
    printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");
    printf("Enter the number \n");
    scanf("%d",&n);
    int temp=n;
    while(n!=0)
    {
        last=n%10;
        rev=(rev*10)+last;
        n=n/10;
    }
    printf("The reversed number is %d\n",rev);
    
        if(rev==temp)
        {
            printf("Palidrome\n");
        }
        else
        {
            printf("Not a palindrome ");
        }
    
    
    return 0;
}
