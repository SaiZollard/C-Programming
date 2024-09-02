/*
What will be the following line produced in a c program.
printf("%d %d %d\n",a,++a,a++);
*/

#include<stdio.h>

int main() {
    int a = 3;
    printf("%d %d %d\n",a,++a,a++);
    //It exicuted in right to left (<----)
    //3 ~ a++ = print 3 but increment to 4
    //4 ~ ++a = print 5 
    //5 ~ a = print 5
    //Then it listed how it given a = 5 , ++a = 5 , a++ = 5
    return 0;
}