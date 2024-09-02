#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[30];
};
int main(){
    struct employee zollard = {100, 954897.23,"zollard"}; //We create 100 arrays 

    printf("Code is :%d \n",zollard.code);
    printf("Salary is :%f \n",zollard.salary);
    printf("Name is :%s \n",zollard.name);
    printf("Done");

    return 0;
}