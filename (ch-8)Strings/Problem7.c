#include<stdio.h>
int occurence(char st[],char c){
    char *ptr = st;
    int count = 0;
    while(*ptr != '\0'){
        if(*ptr == c){
            count++;
        }
        ptr++;
    }
    return count;
}
int main(){
    char st[] = "This will count how many letter present in the sentence 455888";
    int count = occurence(st,'e');
    printf("Occurance = %d",count);
    return 0;

}