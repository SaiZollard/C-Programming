#include<stdio.h>
void change(int a);

int main(){
    int a=33;
    printf("The value of a before change is %d\n",a);
    change(a);
    printf("The value of a after change is %d\n",a);

    return 0;
}
void change (int a){
a=55;
}

/* There will no change after the change function used 
because the value of 'a' different in "main" and "void" */