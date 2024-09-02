#include<stdio.h>

//void printArray(int *ptr,int n){
//    for(int i=0;i<n;i++){
//        printf("The value of element %d is %d \n",i+1,*(ptr+i));
//    }
//}

//Both are same 

void printArray(int ptr[],int n){
    for(int i=0;i<n;i++){
        printf("The value of element %d is %d \n",i+1,ptr[i]);
    }
    ptr[2]=5555; //The value of array 2 will changed in arr array of main as well
}

int main(){
    int arr[]={11,22,33,44,55,66,77};
    printArray(arr,7);
    printf("%d",arr[2]);
    return 0;
}