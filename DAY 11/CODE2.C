#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profit, lossPercentage;
    
    printf("Enter cost price: ");
    scanf("%f", &costPrice);
    
    printf("Enter selling price: ");
    scanf("%f", &sellingPrice);
    
    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        lossPercentage = (profit / costPrice) * 100;
        printf("Profit percentage: %.2f%%\n", lossPercentage);
    } 
    else if (sellingPrice < costPrice) {
        profit = costPrice - sellingPrice;
        lossPercentage = (profit / costPrice) * 100;
        printf("Loss percentage: %.2f%%\n", lossPercentage);
    } 
    else {
        printf("No profit, No loss\n");
    }
    
    return 0;
}
