#include<stdio.h>
int main()
{
    int x,y,z;

    printf("Enter the value of x\n:y\n:z\n:");
    scanf("%d%d%d",&x,y,z);

    if (x>y&&x>z)
    {
       printf("x is greatest of three number");
    }
    else if (y>x&&y>z)
    {
        printf("y is greatest of three number");
    }
    else if (z>x&&z>y)
    {
        printf("z is greatest of three number");
    }
    else
    {
        printf("x,y,z are equal");
    }
    
return 0;
}