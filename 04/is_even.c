// Q5: Create a function called is_even which takes in an integer and
// returns 1 if it is an even number, and 0 if it is not.
// Tutorial Wednesday 13B, October 2020

// TODO our amazing code here

#include <stdio.h>

// Function prototype
int is_even(int num);

int main(void) {
    int favourite_number = 7;
    
    int result = is_even(favourite_number);
    printf("Result: %d\n", result);
 
    return 0;
}

int is_even(int num) {
    int even_or_odd = 1;
    if (num % 2 == 1) {
        even_or_odd = 0;
    }
    
    return even_or_odd;
    // Lines afterwards not executed
    // sfdaslkjhfasdlkdfslhjka
}






