// Print a n by n square of *
// By W13B, September 2020

#include <stdio.h>

int main(void) {
    int number;
    int row;
    int column;

    // Obtain input
    printf("Enter size: ");
    scanf("%d", &number);

    row = 1;
    while (row <= number) {
        column = 1;
        while (column <= number) {
            printf("*");
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }

    return 0;
}
