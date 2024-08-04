#include <stdio.h>
#include <string.h>

// Function to compare two INTALs
int compareINTAL(char* intal_a, char* intal_b) {
    // Get the lengths of both INTALs
    int length_a = strlen(intal_a);
    int length_b = strlen(intal_b);
    
    // Compare lengths of the INTALs
    if (length_a > length_b) {
        return 1; // intal_a is greater
    }
    if (length_a < length_b) {
        return -1; // intal_b is greater
    }
    
    // If lengths are equal, compare digit by digit
    for (int i = 0; i < length_a; i++) {
        if (intal_a[i] > intal_b[i]) {
            return 1; // intal_a is greater
        }
        if (intal_a[i] < intal_b[i]) {
            return -1; // intal_b is greater
        }
    }
    
    // If all digits are equal, return 0
    return 0;
}
