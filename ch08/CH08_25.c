#include <stdio.h>
#include <stdlib.h>

#define scanfint(x) scanf("%d", &x) /* ��J��ƪ�scanf�����w�q */ 
#define scanffloat(x) scanf("%f", &x)/* ��J��ƪ�scanf�����w�q */

int main()
{
    int x;
    float y;

    printf("�п�J���x�G");
    scanfint(x);/*�I�s�������*/ 
    printf("�п�J���y�G");
    scanffloat(y);/*�I�s�������*/ 
    printf("���x = %d\n", x);
    printf("���y = %.2f\n", y);
    
    system("pause");
    return 0;
}
