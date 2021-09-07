#include<stdio.h>
int main ()
{
    int R,H,B,W,L,option;
    float area_of_circle,area_of_rectangle,area_of_triangle,pi=3.14;

    printf("choose any one:\n");
    printf("enter 1 for circle\n");
    printf("enter 3 for rectangle\n");
    printf("enter 2 for triangle\n");

    printf("enter any option:\n");
    scanf("%d",&option);

    switch (option)
    {
    case 1:
        printf("Enter the radious of circle R : \n");
        scanf("%d",&R);
        area_of_circle = pi*R*R;
        printf("the area of circle is : %f",area_of_circle);
        break;
    case 2:
        printf("enter the height of triangle H :\n");
        scanf("%d",&H);
        printf("enter the base of triangle B:\n");
        scanf("%d",&B);
        area_of_triangle = (H*B)/2;
        printf("the area of triangle is :%f",area_of_triangle);
        break;
    case 3:
        printf("enter the length of rectangle L :\n");
        scanf("%d",&L);
        printf("enter the weidth of rectangle W:\n");
        scanf("%d",&W);
        area_of_rectangle = L*W;
        printf("the area of rectangle is :%f",area_of_rectangle);
        break;
    
    default:
        printf("select a correct option.\n");
        break;
    }

return 0;  
}