#include <stdio.h>

int main() 
{
    float celsius, fahrenheit;
    printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");
    printf("Enter temperature in Celsius\n ");
    scanf("%f",&celsius);
    fahrenheit=(celsius * 9 / 5) + 32;

    printf("%.2f\n",fahrenheit);

    return 0;
}
