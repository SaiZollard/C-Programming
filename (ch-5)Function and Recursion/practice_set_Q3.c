/* 
Write a function to calculate force of attraction
on a body of mass m exerted by earth
*/

#include<stdio.h>
float force(float mass);
int main() {
    float m;
    printf("Enter the mass of the body in kg : \n");
    scanf("%f",&m);
    printf("The value of force in Newton is %.2f\n",force(m));
    return 0;
}

float force(float mass){
    float result = mass * 9.8;
    return result;
}
