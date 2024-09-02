//Finding the factorial of the given number using recursion function

#include<stdio.h>
int factorial(int x); //This is optional but by putting this it is a recursion example
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("Factorial of %d is %d",a,factorial(a));
    return 0;
    }

int factorial(int x){  
    if(x==1 || x==0){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }

}