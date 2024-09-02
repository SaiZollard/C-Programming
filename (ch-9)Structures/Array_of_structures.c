#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[30];
};
int main(){
    struct employee facebook[100]; //We create 100 arrays 
    
    facebook[0].code = 100;
    facebook[0].salary = 1000.0;
    strcpy(facebook[0].name, "rockey");

    facebook[1].code = 101;
    facebook[1].salary = 2000.0;
    strcpy(facebook[1].name, "subham");

    facebook[1].code = 103;
    facebook[1].salary = 3000.0;
    strcpy(facebook[1].name, "kiran");
    printf("Done");

    return 0;
}