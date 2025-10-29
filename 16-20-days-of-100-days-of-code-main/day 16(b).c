#include <stdio.h>

int main() {
    int number, i;
    int binary[32];  
    int index = 0;

    printf("Enter a number\n");
    printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");
    scanf("%d", &number);

    
    if(number == 0) 
    {
        printf("binary representation 0\n");
        return 0;
    }
        while (number>0)
     {
        binary[index] =number%2;
        number =number / 2;
        index++;
    }

    printf("binary representation: ");
    for (i=index- 1;i >=0;i--) 
    {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
