//Conver celsius to fahrenheit 
//Formula (F = (9/5)C + 32)
#include<stdio.h>
float celsius(int c);

int main() {
    int c;
    printf("Enter temperature in Celsius: ");
    scanf("%d", &c);
    printf("The value of %d celsius in fahrenheit is : %f",c,celsius(c));
    return 0;
}

float celsius(int c) {
    float result;
        result=(float)(c * 9.0/5.0) + 32.0;
        return result;
}