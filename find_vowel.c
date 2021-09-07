#include<stdio.h>
int main()
{
    char vowel;
    printf("enter a alfabet:\n");
    scanf("%c",&vowel);
    if (vowel == 'a' || vowel== 'e' || vowel== 'i' || vowel== 'o' || vowel=='u'||vowel=='A'|| vowel=='E'||vowel=='I'||vowel=='O'||vowel=='U')
    {
        printf("charactor is vowel\n");
    }
    else
    {
        printf("charactor is constant\n");
    }
    
return 0;


}