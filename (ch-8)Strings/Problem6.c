/*
Write a program to decrypt the string encrypted using encrypt function in problem5.
*/
#include<stdio.h>
void decrypt(char *c){
    char *ptr = c;
    while(*ptr != '\0'){
        *ptr = *ptr - 1;
        ptr++;
}
}
int main(){
    char c[] = "Ijj!j!bn![pmmbse";
    decrypt(c);
    printf("Encrypted string is : %s", c);
    return 0;
}