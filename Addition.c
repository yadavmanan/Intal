#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to add two INTALs
char* addINTAL(char* intal_a, char* intal_b) {
    int length_a = strlen(intal_a);
    int length_b = strlen(intal_b);
    
    // Find the maximum length between the two INTALs
    int max_length = (length_a > length_b) ? length_a : length_b;
    
    // Allocate memory for the result (max_length + 2 for possible carry and null terminator)
    char* result = (char*)malloc((max_length + 2) * sizeof(char));
    
    // Initialize carry to 0
    int carry = 0;
    int sum;
    int i_a, i_b, i_r = max_length;
    
    // Null terminate the result
    result[i_r + 1] = '\0';
    
    // Perform addition from the last digit to the first
    for (int i = 0; i < max_length; i++) {
        // Get the digits to be added from intal_a and intal_b
        i_a = (length_a - 1 - i >= 0) ? intal_a[length_a - 1 - i] - '0' : 0;
        i_b = (length_b - 1 - i >= 0) ? intal_b[length_b - 1 - i] - '0' : 0;
        
        // Calculate the sum and carry
        sum = i_a + i_b + carry;
        carry = sum / 10;
        sum = sum % 10;
        
        // Store the sum digit in the result
        result[i_r--] = sum + '0';
    }
    
    // If there's a carry left, add it to the result
    if (carry > 0) {
        result[i_r--] = carry + '0';
    }
    
    // Move the result to the correct position if there's no carry left
    if (i_r == 0) {
        for (int i = 0; i <= max_length; i++) {
            result[i] = result[i + 1];
        }
    }
    
    return result;
