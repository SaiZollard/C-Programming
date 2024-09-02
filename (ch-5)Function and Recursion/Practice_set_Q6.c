/*
Write a recursive function to calculate the 
sum of first n natural number.
*/
#include<stdio.h>
int sum(int n); //optional 
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of first %d natural number is %d", num, sum(num));
    return 0;
    }
    int sum(int n) {
        if (n == 1)
        return 1;
        else
        return n + sum(n - 1);
        }
