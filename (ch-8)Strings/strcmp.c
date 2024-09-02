/*
strcmp :- This function is used to compare two string it return 0 
if strings are equal.(Depend upon ASCII value)
->(st1 - st2) in this case Z-S=positive so the output is 1
->if the value is negative then the output is -1
->And if the value is same the out put is 0
-> And her Capital and Small letter is varies
*/

#include<stdio.h>
#include<string.h>

int main(){
    char st1[45] = "zollard";
    char *st2 = "sai kiran";
    int val = strcmp(st1,st2);
    printf("Now the value is %d",val);
    return 0;
}