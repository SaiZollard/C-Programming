#include<stdio.h>
int main(){
    int i=34;
    int *j=&i; //j will now store the address of i
    printf("The value of i is %d\n",i); //For value we use %d
    printf("The value of i is %d\n",*j);
    printf("The address of i is %u\n",&i); //For address we use %u
    printf("The address of i is %u\n",j);
    printf("The address of j is %u\n",&j);
    printf("The value of j is %d\n",*(&j));

return 0;
}