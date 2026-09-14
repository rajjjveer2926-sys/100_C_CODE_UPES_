#include <stdio.h>

int factorial(int n) {
    if (n < 0) {
        return -1;
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num;
    
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);
    
    int result = factorial(num);
    
    if (result == -1) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d\n", num, result);
    }
    
    return 0;
}
