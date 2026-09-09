#include "statistics.h"
#include <math.h>

int sum(int *arr, int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

double average(int *arr, int size) {
    if (size == 0) return 0.0;
    return (double)sum(arr, size) / size;
}

double standard_deviation(int *arr, int size) {
    if (size == 0) return 0.0;

    double avg = average(arr, size);
    double sum_sq_diff = 0.0;

    for (int i = 0; i < size; i++) {
        double diff = arr[i] - avg;
        sum_sq_diff += diff * diff;
    }

    return sqrt(sum_sq_diff / size);
}

int maximum(int *arr, int size) {
    if (size == 0) return 0;

    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int minimum(int *arr, int size) {
    if (size == 0) return 0;

    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int range(int *arr, int size) {
    if (size == 0) return 0;
    return maximum(arr, size) - minimum(arr, size);
}
