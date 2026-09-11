#include <stdio.h>

int main() {
    int n, i, term = 1;

    // Prompt the user to enter the number of terms
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    printf("The AP series up to %d terms is:\n", n);

    // Loop to generate and print the AP series
    for (i = 1; i <= n; i++) {
        printf("%d", term);
        
        // Print a comma and space except for the last term
        if (i < n) {
            printf(", ");
        }
        
        // Each term increases by 2
        term += 2; 
    }

    printf("\n");

    return 0;
}