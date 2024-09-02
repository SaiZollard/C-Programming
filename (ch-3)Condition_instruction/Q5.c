#include <stdio.h>
//97-122 (for lowercase) ASCII value
//65-90 (for upper case) ASCII value
int main() {
    char ch;
    printf("Enter the character : \n");
    scanf("%c", &ch);
    if(ch<=122 && ch>=97){
        printf("The character is a lowercase alphabet.\n");
    }
    else if(ch<=90 && ch>=65){
        printf("The character is a uppercase alphabet.\n");
        }
        else{
            printf("The character is not an alphabet.\n");
        }

    return 0;
}