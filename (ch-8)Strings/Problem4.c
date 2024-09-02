/*
Write your own version of strcpy function form <string.h>
*/
#include <stdio.h>

char* custom_strcpy(char* dest, const char* src) {
    char* ptr = dest;
    while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }
    *ptr = '\0';
    return dest;
}

int main() {
    char src[] = "Hello, World!";
    char dest[20];

    printf("Source string: %s\n", src);
    custom_strcpy(dest, src);
    printf("Destination string: %s\n", dest);

    return 0;
}