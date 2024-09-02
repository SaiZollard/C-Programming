/*
Try problem 3 using call by value and verify that it doesn't change 
the value of the said variable.

Q3. Write a program to change the value of a variable to ten times
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
int mul(int i){  //Function
    int c;
    c=i*10;
    i=54578;
    return c;
}

//We can't change the value of main by using function 