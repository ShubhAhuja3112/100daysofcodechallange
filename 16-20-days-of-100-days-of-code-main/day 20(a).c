#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];

    printf("Enter a binary number: ");
    scanf("%s", binary);
    printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");
    for (int i = 0; i < strlen(binary); i++) 
    {
        if (binary[i] == '0')
        {
            binary[i] = '1';
        } 
        else if (binary[i] == '1') 
        {
            binary[i] = '0';
        } 
        else 
        {
        
            printf("Invalid binary number.\n");
            return 1;
        }
    }

    
    printf("1's complement: %s\n", binary);

    return 0;
}


