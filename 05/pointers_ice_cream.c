// A demo program to explain pointers
// By Wednesday 13B tutorial

#include <stdio.h>

int main(void) {
    // Declaring an int
    int caramel;
    // Initialising an int
    caramel = 10;
    
    // Declaring an int POINTER
    int *caramel_pointer;
    
    // TODO why not int*?
    
    // Initialising an int POINTER
    caramel_pointer = &caramel;
    
    // TODO: Why is the * dropped from the pointer name here?
    
    printf("Number of caramel scoops: %d\n", caramel);
    printf("Caramel int lives at address: %p\n", &caramel);
    printf("Address stored by pointer: %p\n", caramel_pointer);
 
    // TODO: change caramel via the pointer
    // ???
     
    printf("Number of caramel scoops: %d\n", caramel);

    return 0;
}
