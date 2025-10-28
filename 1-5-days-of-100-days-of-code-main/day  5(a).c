#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, simpleInterest, compoundInterest;

    
    printf("Enter Principal Amount\n");
    scanf("%f", &principal);

    printf("Enter Rate of Interest \n");
    scanf("%f", &rate);

    printf("Enter Time (in years)\n");
    scanf("%f", &time);

    
    simpleInterest = (principal * rate * time) / 100;

   compoundInterest = principal * (pow((1 + rate / 100), time)) - principal;

    
    printf("Simple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f", compoundInterest);

    return 0;
}
