#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int sum = 0;
    for(int i = 1; i <= 10; i++) {
        sum += num* i;
    }
    printf("The sum of the numbers occurring in the multiplication table of %d is: %d\n", num,sum);
    return 0;
}
    
