/*
strcpy :- This function is used to copy the content of second 
string into first string passed to it.
*/

#include<stdio.h>
#include<string.h>

int main(){
    char *st = "Zollard";
    char st2[45];
    strcpy(st2,st);
    printf("Now the st2 is %s",st2);
    return 0;
}
