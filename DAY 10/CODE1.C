#include <stdio.h>

int main() {
    float a, b, c;
    
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    
    // Check if it forms a valid triangle
    if (a + b > c && b + c > a && a + c > b) {
        // Classify triangle
        if (a == b && b == c) {
            printf("Equilateral Triangle\n");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles Triangle\n");
        } else {
            printf("Scalene Triangle\n");
        }
    } else {
        printf("Invalid Triangle\n");
    }
    
    return 0;
}
