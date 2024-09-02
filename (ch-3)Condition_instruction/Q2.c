#include <stdio.h>

int main() {
    int physic,chemistry,math;
    float total;
     
    printf("Enter the physic marks : \n");
    scanf("%d",&physic);
    
    printf("Enter the chemistry marks : \n");
    scanf("%d",&chemistry);

    printf("Enter the math marks : \n");
    scanf("%d",&math);

   total=(physic + chemistry + math)/3;

    if ((total<40) || physic<33 || chemistry<33 || math<33){
        printf("You total persentage is %f and you are fail\n",total);

    }
    else{
        printf("You total persentage is %f and you are pass\n",total);
    }

    return 0;
}