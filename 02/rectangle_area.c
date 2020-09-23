// Calculates the area of a rectangle
// Amazing tutorial W13B, September 2020

#include <stdio.h>
#define PI 3.14
#define RECTANGLE_MODE 0
#define TRIANGLE_MODE 1

int main(void) {
    // DONE Ask user to type in length, width
    int length;
    int width;
    int mode;
    
    // double 3.25
    // Declaring a variable - "I exist!"
    // Initalising a variable
    
    // DONE Read in the information, store it in...??
    printf("Please enter length:");
    scanf("%d", &length);
    printf("Please enter width:");
    scanf("%d", &width);
    printf("Do you want a rectangle (0) or triangle? (1):");
    scanf("%d", &mode);
    
    // DONE Calculate the area of a rectangle, length * width
    int area = length * width;
    
    // DONE Show the user the area
    // TODO talk about division
    double triangle_area = (1/2.0) * length * width;
    
    // if (like_cats || like_dogs)
    
    if (mode == RECTANGLE_MODE && area >= 0) {
        printf("Length: %d Width: %d Rectangle Area = %d\n", length, width, area);
    } else if (mode == TRIANGLE_MODE) {
        printf("Triangle area: %lf\n", triangle_area);
    } else {
        printf("Error\n");
    }

    return 0;
}

