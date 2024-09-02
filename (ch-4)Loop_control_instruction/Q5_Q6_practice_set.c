//WRITE THE SUM OF THE FIRST N NATURAL NUMBER USING FOR LOOP,WHILE LOOP & DO WHILE LOOP

//USING FOR LOOP
/*  #include <stdio.h>
int main() {
    int num;
    printf("Enter the number upto you want the sum of it : ");
    scanf("%d", &num);
    int sum=0;
    for(int i=1; i<=num; i++) {
        sum+=i;
        }
        printf("The sum of the numbers upto %d is %d", num,sum);
        return 0;
}
*/


//USING WHILE LOOP
/* #include <stdio.h>
int main(){
    int num;
    printf("Enter the number upto you want the sum of it : ");
    scanf("%d", &num);
    int sum=0;
    int i=1;
    while(i<=num){
        sum+=i;
        i++;
        }
        printf("The sum of the numbers upto %d is %d", num,sum);
    return 0;
}
*/


//Q6 USING DO WHILE LOOP
#include <stdio.h>

int main() {
    int num;
    printf("Enter the number upto you want the sum of it : ");
    scanf("%d", &num);
    int i = 1;
    int sum = 0;

    do {
        sum += i;
        i++;
    } while (i <= num);

    printf("The sum of the first %d natural numbers is: %d\n", num,sum);

    return 0;
}