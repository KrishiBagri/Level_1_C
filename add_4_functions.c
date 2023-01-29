#include<stdio.h>

float first(){
    float a;
    printf("Enter the first number and press Enter: ");
    scanf("%f",&a);
    return a;
}

float second(){
    float b;
    printf("Enter the first number and press Enter: ");
    scanf("%f",&b);
    return b;
}

void sum(float x, float y){
    float add;
    add=x+y;
    printf("The Sum of the two numbers entered by user is: %f",add);
    
}

void main(){
    float c,d;
    c=first();
    d=second();
    sum(c,d);
}
