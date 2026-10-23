#include <stdio.h>

int main() {
    int n;
    int category;
     
    int regular_count = 0;
    int premium_count = 0;
    int recliner_count = 0;
    
    double total_price = 0.0;
    double final_amount = 0.0;

    printf("Enter number of tickets: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter category for ticket %d (1/2/3): ", i);
        scanf("%d", &category);

        if (category == 1) {
            regular_count++;
            total_price += 150;
        } else if (category == 2) {
            premium_count++;
            total_price += 250;
        } else if (category == 3) {
            recliner_count++;
            total_price += 400;
        }
    }

    int discount_applied = 0;
    if (n >= 5) {
        discount_applied = 1;
        final_amount = total_price * 0.90; 
    } else {
        final_amount = total_price;
    }

    printf("\n--- Final Bill ---\n");
    printf("Regular tickets: %d\n", regular_count);
    printf("Premium tickets: %d\n", premium_count);
    printf("Recliner tickets: %d\n", recliner_count);
    printf("Total (before discount): %.0f\n", total_price);
    
    if (discount_applied) {
        printf("Discount applied: Yes\n");
    } else {
        printf("Discount applied: No\n");
    }
    
    printf("Final Amount: %.0f\n", final_amount);

    return 0;
}
    