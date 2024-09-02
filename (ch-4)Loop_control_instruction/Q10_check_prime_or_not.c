#include <stdio.h>
int main() {
    int n, prime=1;
    printf("Enter the number to check wether the number is prime or not :");
    scanf("%d",&n);
    for(int i=2 ; i<n ;i++){
            if(n%i==0){
                prime=0;
                break;
                }
        }
        if(prime == 0){
            printf("%d is not a prime number",n);
        }
        else{
            printf("%d is a prime number",n);
        }
    
         return 0;
    }