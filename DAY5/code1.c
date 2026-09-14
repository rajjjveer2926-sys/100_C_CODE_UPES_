#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float simpleInterest, amount, compoundInterest;
    
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter rate of interest (per annum): ");
    scanf("%f", &rate);
    
    printf("Enter time period (in years): ");
    scanf("%f", &time);
    
    // Calculate Simple Interest
    // Formula: SI = (P * R * T) / 100
    simpleInterest = (principal * rate * time) / 100;
    
    // Calculate Compound Interest
    // Formula: A = P(1 + R/100)^T
    // CI = A - P
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;
    
    printf("\n--- Interest Calculation Results ---\n");
    printf("Principal Amount: Rs. %.2f\n", principal);
    printf("Rate of Interest: %.2f%% per annum\n", rate);
    printf("Time Period: %.2f years\n", time);
    printf("\nSimple Interest: Rs. %.2f\n", simpleInterest);
    printf("Compound Interest: Rs. %.2f\n", compoundInterest);
    printf("Amount after Compound Interest: Rs. %.2f\n", amount);
    
    return 0;
}
