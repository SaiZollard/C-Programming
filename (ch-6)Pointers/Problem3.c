/*
Write a program to change the value of a variable to ten times
of its current value. Write a function and pass the value by reference.
*/ 
#include<stdio.h>

int main(){
    int i=5;
    printf("The value of i before passing to a function is %d\n",i);
    function(i);
    return 0;
}

void function(int i){
    i=i*10;
    printf("The value of i after passing to a function is %d\n",i);
    
}

