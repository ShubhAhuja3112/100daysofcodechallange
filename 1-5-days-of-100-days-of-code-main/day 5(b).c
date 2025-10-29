#include <stdio.h>

int main() {
    int seconds, hours, minutes, remainingseconds;
    printf("Name Shubh\nSAP ID -590021265\nCourse-BCA\nBatch-B5\n");
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    hours=seconds/3600;             
    remainingseconds=seconds % 3600;      
    minutes=remainingseconds/60;        
    remainingseconds=remainingseconds % 60;


    printf("Time = %d:%d:%d\n", hours, minutes, remainingseconds);

    return 0;
}
