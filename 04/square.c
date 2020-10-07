// Array demo. Calculate the square of indices
// Tutorial Wednesday 13B, October 2020

#include <stdio.h>

int main(void) {
    int numbers[5] = {0, 1, 2, 3, 4};
    // int numbers[5] = {0};
    // int num;
    
    // numbers[0] = 0;
    // numbers[1] = 1;
    // numbers[2] = 2;
    
    int i = 0;
    while (i < 5) {
        numbers[i] = i * i;
        i++;
    }
    
    // TODO: print the elements
    i = 0;
    while (i < 5) {
        printf("%d\n", numbers[i]);
        i++;
    }
    return 0;
}
