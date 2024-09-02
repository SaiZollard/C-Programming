#include <stdio.h>

int main() {
    int num;
    printf("Enter the multiplication table you want in reverse order : ");
    scanf("%d", &num);
    for(int i=10; i ;i--)
    {
        printf("%d * %d = %d\n", num, i, i*num);
    }
        return 0;
}