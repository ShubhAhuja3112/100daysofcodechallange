#include <stdio.h>

int main() {
    float radius, area, circumference;
    printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");
    float pi=3.14;
    printf("Enter the radius of the circle \n");
    scanf("%f", &radius);

    area =pi*radius*radius;
    circumference = 2*pi*radius;

    printf("Area of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f\n", circumference);

    return 0;
}
