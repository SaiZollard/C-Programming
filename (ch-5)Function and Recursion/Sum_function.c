#include<stdio.h>
//Sum is a function which take a and b as input and return an integer as an output
int sum(int a, int b); //Function Prototype declaration

int main(){
    int c;
    c = sum(2,7);
    printf("The value of c is %d\n",c);
    return 0;
    }

    int sum(int a,int b){
        int result;
        result = a+b;
        printf("The value of result is %d\n",result);
        return result;
    } 