#include<stdio.h>

int main(){
    //Naive way to create 4 ints without using array
    //int  Mark1 , Mark2 , Mark3 ,  Mark4;
    //Mark1=20;
    //Mark2=60;
    //Mark3=40;
    //Mark4=90;
    //printf("The marks are %d %d %d %d",Mark1,Mark2,Mark3,Mark4);

    //Smart way to create 4 ints with using array
    int  Mark[4]; //allocate space for 4 integers
    Mark[0]=20;
    Mark[1]=60;
    Mark[2]=40;
    Mark[3]=90;
    printf("The marks are %d %d %d %d",Mark[0],Mark[1],Mark[2],Mark[3]);

       return 0;
}