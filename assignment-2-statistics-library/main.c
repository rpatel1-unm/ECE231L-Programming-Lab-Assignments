#include <stdio.h>
#include "statistics.h"
#include "output_array.h"

int main() {
    // Example array for test only
    int data[] = {15, 23, 8, 42, 16, 4, 9, 34, 12, 27};
    int size = sizeof(data) / sizeof(data[0]);

    // Output of the array
    printf("=== Array Statistics ===\n");
    output_array(data, size);
    printf("\n");

    // To Calcaulate and display statistics
    printf("Sum: %d\n", sum(data, size));
    printf("Average: %.2f\n", average(data, size));
    printf("Standard Deviation: %.2f\n", standard_deviation(data, size));
    printf("Maximum: %d\n", maximum(data, size));
    printf("Minimum: %d\n", minimum(data, size));
    printf("Range (Max - Min): %d\n", range(data, size));

    return 0;}
