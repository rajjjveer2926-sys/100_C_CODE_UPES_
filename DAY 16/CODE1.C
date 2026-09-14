#include <stdio.h>

void printBinary(int num) {
    if (num == 0) {
        printf("0");
        return;
    }
    
    int binary[32];
    int i = 0;
    
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Binary representation: ");
    printBinary(n);
    printf("\n");
    
    return 0;
}
