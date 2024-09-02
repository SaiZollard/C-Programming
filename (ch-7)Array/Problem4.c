/*
Q4)Repeat problem 3 for a genaral input provided by the user using scanf.

Q3)Write a program to create an array of 10 integer and store
     multiplication table of 5 in it.

*/

#include<stdio.h>

int main(){
    int mul[10];
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    for(int i=0; i<10; i++){
        mul[i]=n*(i+1);
    }
    for(int i=0; i<10; i++){
        printf("5 X %d = %d\n",i+1,mul[i]);
    }
    return 0;
}