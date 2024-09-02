#include<stdio.h>

int main(){
   
   //char *ptr = "Sai Kiran";
   //char ptr[] = "Sai Kiran";  //Another way
   // printf("%s",ptr);

   char s[34];
    printf("Enter your name : ");
    scanf("%s",s);
    printf("Your name is %s",s);

    return 0;
}

//Scanf cannot be used to input multi-word strings with spaces.
