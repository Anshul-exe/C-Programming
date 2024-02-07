#include <stdio.h>

int main() {
    int num;
    printf("give your no.\n");
    scanf("%d",&num); // Declare a regular variable
    int *ptr;     // Declare an integer pointer

    ptr = &num;   // Initialize the pointer with the address of 'num'

    printf("Value at num: %d\n", num);      // Prints 42
    printf("Value at *ptr: %d\n", *ptr);    // Prints 42 (dereferencing)

    // Modify the value using the pointer
    *ptr = 99; // Change the value of 'num' to 99

    printf("Updated value at num: %d\n", num); // Prints 99

    return 0;
}