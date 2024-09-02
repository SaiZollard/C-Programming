//Write a c program to calculate area of a Rectangle by the user input
#include <stdio.h>
int main(){
    int length,breadth;
    printf("What is the length of the rectangle :\n");
    scanf("%d",&length);
     printf("What is the breadth of the rectangle :\n");
    scanf("%d",&breadth);

    printf("The area of the rectangle is %d",length*breadth);
    return 0;
}