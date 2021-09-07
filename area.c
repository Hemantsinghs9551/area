#include <stdio.h>
int main()
{
    int R,H,B,W,L;
    float area_of_circle,area_of_triangle,area_of_reactangle,pi=3.14;

    //triangle
    printf("enter the height of trianlge H:\n");
    scanf("%d",&H);
    printf("enter the base of triangle B:\n");
    scanf("%d",&B);

    area_of_triangle = (H*B)/2;
    printf("area of triangle is : %f\n",area_of_triangle);

    //rectangle
    printf("enter the length of rectangle L:\n");   
    scanf("%d",&L);
    printf("enter the weidth of rectangle W:\n");
    scanf("%d",&W);

    area_of_reactangle = (L*W);
    printf("area` of rectangle is : %f\n",area_of_reactangle);


    //circle

    printf("enter the radious of circle R :\n");
    scanf("%d",&R);

    area_of_circle = pi*R*R;
    printf("the area of circle is : %f",area_of_circle);

    return 0;
}
