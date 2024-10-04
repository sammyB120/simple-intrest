/*
Author:saamuel mbuya
Reg No:CT102/G/23825/24
Date:04/10/2024
*/
#include <stdio.h>
#include <math.h> 
float simple_interest(float principal, float time, float rate) {
    return (principal * time * rate) / 100;
}
float compound_interest(float principal, float rate, float time, int n) {
    return principal * pow((1 + rate / (n * 100)), (n * time));
}
int main() {
    float principal, time, rate;
    int n;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the time (in years): ");
    scanf("%f", &time);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    float interest = simple_interest(principal, time, rate);
    printf("Simple Interest is: %.2f\n", interest);
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);
    
    float amount = compound_interest(principal, rate, time, n);
    float compound_interest_value = amount - principal; // Calculate the compound interest
    printf("Compound Interest is: %.2f\n", compound_interest_value);
    printf("Total amount after interest: %.2f\n", amount);
    return 0;
}
