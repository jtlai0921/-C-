#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct
    {
        int length;
        int width;
    } rectangle;/*�ŧi���c���A�P�ܼ�*/ 

    printf("��J���P�e�G");
    scanf("%d %d", &rectangle.length, &rectangle.width);
    /*��J���P�e����*/ 
    printf("��=%d �e=%d\n", rectangle.length, rectangle.width);
    /* �Q���I�B��l�ӿ�X���c�ܼƤ����U����*/ 
    system("pause");
    return 0;
}
