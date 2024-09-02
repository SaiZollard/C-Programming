/*
Write a program containing function which counts
the number of positive integers in an array.
*/

#include <stdio.h>
int countPositiveIntegers(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {-1, 2, 3, -4, 5, 0, 7, -8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = countPositiveIntegers(arr, size);
    printf("Number of positive integers in the array: %d\n", count);
    return 0;
}