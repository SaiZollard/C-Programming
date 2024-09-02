/*
Create an array of size 3 X 10 counting multiplication table
of the number 2,7 and 9 respectively.
we can create this program by taking user input also. 
*/
#include <stdio.h>
void printTable(int *mulTable, int num, int n){
    printf("The multiplication table of %d is :\n",num);
    for(int i=0;i<n;i++){
        mulTable[i] = num *(i+1);
    }
    for(int i=0; i<n; i++){
        printf("%d X %d = %d\n",num, i+1, mulTable[i]);
    }
    printf("*********************************************\n");
}
int main(){
    int mulTable[3][10];
    printTable(mulTable[0], 2, 10);
    printTable(mulTable[1], 7, 10);
    printTable(mulTable[2], 9, 10);

    return 0;
}

