#include <stdio.h>
int main()
{
    int a,b,c,d,e,n,avg;
    printf("Enter first value a:\n");
    scanf("%d",&a);
    printf("enter second value b:\n");
    scanf("%d",&b);
    printf("enter third value c:\n");
    scanf("%d",&c);
    printf("enter forth value d:\n");
    scanf("%d",&d);
    printf("enter fifth value e:\n");
    scanf("%d",&e);
    printf("enter the total no. of value:\n");
    scanf("%d",&n);

    avg = (a+b+c+d+e)/n;
    printf("avg. is : %d",avg);

    return 0;


}