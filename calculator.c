#include <stdio.h>
int main()
{
    int num1, num2, select, result;
    printf("Enter 1 for add \n");
    printf("Enter 2 for substraction \n");
    printf("Enter 3 for multipli \n");
    printf("Enter 4 for devide \n");

    printf("select any operator \n");
    scanf("%d", select);

    printf("enter the value of num1:\n");
    scanf("%d", &num1);
    printf("enter the value of num2:\n");
    scanf("%d", &num2);

    if (select==1)
    {
        result = num1 + num2;
        printf("the addition of num1 and num2 is %d + %d : %d", result);
    }
    else if (select==2)
    {
       result = num1 - num2;
       printf("the substraction of num1 and num2 is %d - %d : %d,",result);
    }
    else if (select==3)
    {
        result = num1 * num2;
        printf("the multipli of num1 and num2 is %d * %d : %d", result);
    }
    else if (select==4)
    {
        result = num1 / num2;
        printf("the devide of num1 and num2 is %d / %d : %d", result);
    }
    else
    {
        printf("please enter a valid option");
    }

    return 0;
}