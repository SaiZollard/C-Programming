/*
Create a 2d array by taking input from the user. Write a display
function to print the content of this 2d array in the screen.
*/
#include <stdio.h>

// Function to display the 2D array
void display(int rows, int cols, int array[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    // Taking input for number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int array[rows][cols];

    // Taking input for the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // Displaying the array
    printf("The 2D array is:\n");
    display(rows, cols, array);

    return 0;
}
