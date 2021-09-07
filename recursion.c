#include<stdio.h>
int main()
{
    int N,rev = 0,M;
    printf("Enter a number  N : \n");
    scanf("%d",&N);

    while (N != 0)
    {
        M= N%10;
        rev = rev*10+M;
        N = N/10;
    }
    {
        printf("Reverse is :%d",rev);
        return 0;
    }
    
}