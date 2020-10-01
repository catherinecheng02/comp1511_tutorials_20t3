// Q5 : Write a C program range.c which reads integers n and m and
// then prints the integers n..m, one per line IF divisible by 7
// By W13B, September 2020

#include <stdio.h>

int main(void) {
    int start;
    int end;

    printf("Please type starting number: ");
    scanf("%d", &start);
    printf("Please type ending number (inclusive): ");
    scanf("%d", &end);

    while (start <= end) {
        if (start % 7 == 0) {
            printf("%d\n", start);
        }
        start++;
    }

    return 0;
}
