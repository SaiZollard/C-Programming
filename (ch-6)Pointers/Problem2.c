/*
Q2. Write a program having a variable i.Print the address
    of i . Pass this variable to a function and print its
    address. Are these address same ? Why ?
*/
#include<stdio.h>

int main(){
    int i=4;
    printf("The address of i before passing to a function is %u\n",&i);
    function(i);
    return 0;
}

void function(int i){
    printf("The address of i after passing to a function is %u\n",&i);

}

// The address of main & function is difference 
// the value of i in main is not same what is there in the function
// Same name but different identity