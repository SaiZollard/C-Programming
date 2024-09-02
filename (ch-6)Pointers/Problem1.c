/*
Write a program to print the address of a variable .
use this address to get the value of this variable.
*/
#include<stdio.h>

int main(){
    int a=55;
    int *b=&a;
    printf("The address of variable is %u\n",&a);
    printf("The value of variable is %d\n",*b);

    return 0;
}