#include<stdio.h>
void display(); //Function prototype (1)
void classic(); //Function prototype (2)

int main(){
    int a;
    printf("Initializing display function\n");
    display(); //Function call (1)
    classic(); //Function call (2)
    printf("Display function finished its work\n");
    return 0;
}

//Function Defination
void display(){
    printf("This is display\n");
}
void classic(){
    printf("This is classic\n");
}