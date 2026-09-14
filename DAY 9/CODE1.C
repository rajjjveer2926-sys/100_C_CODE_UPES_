#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;
    
    printf("Enter coefficients of quadratic equation (ax^2 + bx + c = 0):\n");
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);
    printf("Enter c: ");
    scanf("%lf", &c);
    
    if (a == 0) {
        printf("\nThis is not a quadratic equation (a cannot be 0).\n");
        return 0;
    }
    
    discriminant = (b * b) - (4 * a * c);
    
    printf("\nDiscriminant = %.2lf\n", discriminant);
    
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("\nRoot Category: REAL AND DISTINCT\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    }
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("\nRoot Category: REAL AND EQUAL\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    }
    else {
        printf("\nRoot Category: COMPLEX AND IMAGINARY\n");
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }
    
    return 0;
}
