 /* #include <stdio.h>

int main() {
    int i=0;
    do{
        printf("The value of i is %d\n",i);
        i++;
        }while(i<10);
    
        return 0;
} */


//print the first n natural number using do while loop
 #include <stdio.h>

int main() {
    int i=0;
    printf("Enter a natural number upto u want to print : ");
    int n;
    scanf ("%d",&n);
        do{

        printf("The number is  %d\n",i+1);
        i++;
        }while(i<n);
    
        return 0;
}