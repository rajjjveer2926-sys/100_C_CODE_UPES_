#include <stdio.h>

int main() {
    int lateDays;
    float fine = 0.0;
    
    printf("Enter number of late days: ");
    scanf("%d", &lateDays);
    
    if (lateDays <= 0) {
        fine = 0;
    } else if (lateDays <= 7) {
        fine = lateDays * 1.0;  // Rs. 1 per day
    } else if (lateDays <= 14) {
        fine = (7 * 1.0) + ((lateDays - 7) * 2.0);  // Rs. 1 for first 7 days, Rs. 2 per day after
    } else {
        fine = (7 * 1.0) + (7 * 2.0) + ((lateDays - 14) * 5.0);  // Rs. 1 for first 7, Rs. 2 for next 7, Rs. 5 after
    }
    
    printf("Total Fine: Rs. %.2f\n", fine);
    
    return 0;
}
