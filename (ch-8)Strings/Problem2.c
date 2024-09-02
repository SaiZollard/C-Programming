/*
Write your own version of strlen function for <string.h>
*/

#include<stdio.h>

int strlen(char * st){
    char *ptr = st;
    int len=0;
    while(*ptr != '\0'){
        len++;
        ptr++;
        }
        return len;
}

int main(){
    char st[] = "Zollard";
    int a = strlen(st);
    printf("The length of string st is %d",a);
    return 0;
}