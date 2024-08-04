#include <stdio.h>
#include <stdlib.h>

char* initializeINTAL() {
    // Allocate memory for 1001 characters (1000 for digits and 1 for '\0')
    char* intal = (char*)malloc(1001 * sizeof(char));
    
    // Check if memory allocation was successful
    if (intal == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    
    // Initialize all 1000 elements to '0'
    for (int i = 0; i < 1000; i++) {
        intal[i] = '0';
    }
    
    // Set the 1001st element to '\0'
    intal[1000] = '\0';
    
    // Return the pointer to the allocated and initialized memory
    return intal;
}


