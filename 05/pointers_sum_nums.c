// Write a void function which places the sum of two numbers
// inside a variable passed in by reference.
// It should have the following prototype:
// void sum_nums(int a, int b, int *sum);

#include <stdio.h>

void sum_nums(int a, int b, int *sum);

int main(void) {
    int first_num = 5;
    int second_num = 7;
    int total;
    
    // TODO how to call sum_nums?
    sum_nums(first_num, second_num, ??????);
    
    printf("My total: %d\n", total);

    return 0;
}

// Using return - not allowed in this exercise
/*
int sum_nums_with_return(int a, int b) {
    return a + b;
}
*/


void sum_nums(int a, int b, int *sum) {
    // TODO: finish this function
    // ???????????
}
