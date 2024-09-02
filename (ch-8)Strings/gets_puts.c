#include<stdio.h>

int main(){
   
    char s[34];
    printf("Enter your name : ");
    gets(s); //The entered string is stored in st!
    puts(s); //Prints the string places the cursor on the next line
    //printf("Your name is %s",s);  //It only applicable of gets

    return 0;
}

//Now we can print multi-word strings with spaces.