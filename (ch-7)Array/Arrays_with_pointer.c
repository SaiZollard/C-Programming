#include<stdio.h>

int main(){
    int marks[4];
    int *ptr;
    //ptr = &marks[0];
    ptr = marks;   //Both are using same
    for(int i=0;i<4;i++){
        printf("Enter marks of student %d : ",i+1);
        scanf("%d",ptr);
        ptr++;
    }

    for(int i=0; i<4 ; i++){
        printf("The value of marks for student %d is %d\n",i+1,marks[i]);

    }
    
    return 0;
}