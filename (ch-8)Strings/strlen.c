/*
strlen() :- This function is used to count the number of characters
in the string excluding the null('\0') character.
*/

#include<stdio.h>
#include<string.h>

int main(){
    char *st = "Zollard";
    int a = strlen(st);
    printf("The length of string st is %d",a);
    return 0;
}
