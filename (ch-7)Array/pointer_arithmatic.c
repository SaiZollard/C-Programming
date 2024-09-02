#include<stdio.h>

int main(){
    int a=25;
    int *ptr1=&a;
    printf("The value of ptr for int is %u\n",ptr1);
    ptr1++;
    //ptr = ptr + 1;
    //ptr--;
    //ptr = ptr - 1;
    printf("The value of ptr for int after increment is %u\n",ptr1);

    char C = 25;
    char *ptr2 = &C;
    printf("The value of ptr1 for char is %u\n",ptr2);
    ptr2++;
    printf("The value of ptr1 for char after increment is %u\n",ptr2);

    float b = 2.5;
    float *ptr3 = &b;
    printf("The value of ptr1 for float is %u\n",ptr3);
    ptr3++;
    printf("The value of ptr1 for float after increment is %u\n",ptr3);

    return 0;
}

//In my pc the int is 4 byte,char is 1 byte,float is 4 byte