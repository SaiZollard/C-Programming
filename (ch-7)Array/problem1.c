/*
Q1.Create an array of 10 numbers.Verify using pointer arithmetic
that (ptr+2) points to the third element where ptr is a pointer pointing
to the first element of the array.
*/
/*
#include<stdio.h>

int main(){
    int arr[10];
    //int *ptr = &arr[0];
    int *ptr = arr;
    ptr = ptr+2;
    if(ptr==&arr[2]){
        printf("These point to the same location in memory\n");
    }
    else{
        printf("These do not point to the same location in the memory\n");

    }
    return 0;
}
*/

//OR

#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int *ptr = a;
    printf("The value at address %u is %d",ptr+2,*(ptr+2));
    return 0;
}