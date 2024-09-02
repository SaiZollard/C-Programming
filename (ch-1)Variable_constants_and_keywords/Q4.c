/* 
Write a program to calculate simple interest for a set of
values representing principal, no of years and rate of instrest.
*/

#include <stdio.h>
int main(){
    int principal=100,rate=4,year=1;
    int simpleinterest = (principal*rate*year)/100;
    printf("The value of simpleinterest is %d",simpleinterest);
    return 0;
}