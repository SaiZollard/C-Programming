/*
strcat :- This function is used to concatenate two strings without any space.
*/

#include<stdio.h>
#include<string.h>

int main(){
    char st1[45] = "Zollard";
    char *st2 = "Sai kiran";
    strcat(st1,st2);
    printf("Now the st1 is %s",st1);
    return 0;
}