#include<stdio.h>

int main(){
   //char str[] = {'S','A','I','k','I','R','A','N','\0'}; 
   char str[] = "Sai Kiran";
   char *ptr = str;
   while(*ptr!='\0'){
    printf("%c",*ptr);
    ptr++;
   }
    return 0;
}