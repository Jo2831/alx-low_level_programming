#include<stdio.h>

#define ops 4

float sum(float a, float b) {return (a + b);}
float sub(float a, float b) {return (a - b);}
float multi(float a, float b) {return (a * b);}
float div(float a, float b) {return (a / b);}

int main()
{
    float (*ptr_sum[ops]) (float, float);
    *(ptr_sum[ops])= (&sum, &sub, &multi, &div);
    int choise;
    float a, b;
    printf("enter your choise 0 for sum, 1 for sub, 2for multi, 3for div:\n");
    scanf("%d",&choise);
    printf("enter two numbers: \n");
    scanf("%f %f", &a, &b);
    printf("%f",ptr_sum[choise](a, b));
    return 0;

}