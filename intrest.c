#include<stdio.h>
int main ()
{
    float P,R,T,si;

    printf("Principle P:\n");
    scanf("%f",&P);
    printf("Rate R : \n");
    scanf("%f",&R);
    printf("Time T :\n");
    scanf("%f",&T);

    si = (P*R*T)/100;
    printf("si : %f",si);

    



    return 0;
}