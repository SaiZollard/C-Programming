#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee e1,e2,e3;
    printf("Enter the value for code of e1 : ");
    scanf("%d",&e1.code);
    printf("Enter the value for salary of e1 : ");
    scanf("%f",&e1.salary);
    printf("Enter the value for name of e1 : ");
    scanf("%s",e1.name);
    printf("\n");
    printf("Enter the value for code of e2 : ");
    scanf("%d",&e2.code);
    printf("Enter the value for salary of e2 : ");
    scanf("%f",&e2.salary);
    printf("Enter the value for name of e2 : ");
    scanf("%s",e2.name);
    printf("\n");
    printf("Enter the value for code of e3 : ");
    scanf("%d",&e3.code);
    printf("Enter the value for salary of e3 : ");
    scanf("%f",&e3.salary);
    printf("Enter the value for name of e3 : ");
    scanf("%s",e3.name);

    printf("\n");

    printf("The value for code e1 is : %d\n",e1.code);
    printf("The value for salary of e1 is : %f\n",e1.salary);
    printf("The value for name of e1 is : %s\n",e1.name);
    printf("\n");
    printf("The value for code e2 is : %d\n",e2.code);
    printf("The value for salary of e2 is : %f\n",e2.salary);
    printf("The value for name of e2 is : %s\n",e2.name);
    printf("\n");
    printf("The value for code e3 is : %d\n",e3.code);
    printf("The value for salary of e3 is : %f\n",e3.salary);
    printf("The value for name of e3 is : %s\n",e3.name);

    return 0;
}