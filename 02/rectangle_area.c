// Calculates the area of a rectangle
// Amazing tutorial W13B, September 2020
// NOTE: This is a rough working area for the tutorial.

// Exercise: some of the variable names here could be better
// Your code will have much better style than this :)

#include <stdio.h>
#define RECTANGLE_MODE 0
#define TRIANGLE_MODE 1
// Remember - no semicolon; after #define

int main(void) {
    // DONE Ask user to type in length, width
    // Declaring a variable - "I exist!"
    int length;
    int width;
    int mode;
    
    // Initalising a variable with a value.
    // int number = 0;
    
    // DONE Read in the information, store it in variables
    printf("Please enter length:");
    scanf("%d", &length);
    printf("Please enter width:");
    scanf("%d", &width);
    printf("Do you want a rectangle (0) or triangle? (1):");
    scanf("%d", &mode);
    
    // DONE Calculate the area of a rectangle, length * width
    int area = length * width;
    // (1/2) produced 0, oh no! Let's divide by a double instead.
    double triangle_area = (1/2.0) * length * width;
    
    // OR operator example
    // (like_cats || like_dogs) will be true if:
    // + person likes cats
    // + person likes dogs
    // + person likes cats AND dogs
    
    // DONE Show the user the area
      
    // AND operator example
    // condition will be true if both sides of the AND operator are true:
    // + mode IS RECTANGLE_MODE AND simultaneously, area greater than or equal to 0
    if (mode == RECTANGLE_MODE && area >= 0) {
        printf("Length: %d Width: %d Rectangle Area = %d\n", length, width, area);
    } else if (mode == TRIANGLE_MODE) {
        printf("Triangle area: %lf\n", triangle_area);
    } else {
        printf("Error\n");
    }

    return 0;
}

