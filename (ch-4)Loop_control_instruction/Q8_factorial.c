//FACTORIAL OF THE GIVEN NUMBER
//ex--> FACTORIAL OF 4 = 1*2*3*4 = 24

//FACTORIAL OF THE GIVEN NUMBER USING FOR LOOPS
#include <stdio.h>
int main() {
    int num,i=0, fact=1;
    printf("Enter the given number to find the factorial of it : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        fact=fact*i;   //or we can write (fact *=i;)
    }
        printf("The factorial of %d is %d\n" , num,fact);
    return 0;
}


//FACTORIAL OF THE GIVEN NUMBER USING WHILE LOOPS
/* #include <stdio.h>
int main() {
    int num, i=1, fact=1;
    printf("Enter the given number to find the factorial of it : ");
    scanf("%d",&num);
   while(i<=num){
        i=1;
        i++;
        fact=fact*i;
        }
        printf("The factorial of %d is %d\n" , num,fact);
         return 0;
}
*/