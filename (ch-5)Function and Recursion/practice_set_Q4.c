/* 
Write a program using recursion to calculate 
nth element of Fibonacci series
*/
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int result = fibonacci(n);
    printf("The %dth element of the Fibonacci series is %d\n", n, result);
    return 0;
}

