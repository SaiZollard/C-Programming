
#include <stdio.h>
 int main() {
   int a,b,c,d,max;
   printf("Enter four integers: \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    max = a;
    if (b > max) {
    max = b;
    }
    if (c > max) {
    max = c;
    }
   if (d > max) {
     max = d;
    }
    printf("The largest number is: %d\n", max);
    return 0;
}

/*#include <stdio.h>
int main() {
    int a,b,c,d;
    printf("Enter the value of a,b,c,d: \n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b && a>c && a>d){
        printf("a is the largest number");
    }
    if(b>a && b>c && b>d){
        printf("b is the largest number");
    } 
    if(c>a && c>b && c>d){
        printf("c is the largest number");
    }
    if(d>b && d>c && d>a){
        printf(" d is the largest number");
    }
    else {
        printf("All the numbers are equal");
    }
    return 0;*/
