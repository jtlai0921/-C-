#include <stdio.h>
#include <stdlib.h>

#define MAX(a, b) (a>b?a:b)   /* #define ���O�w�q���� MAX(a, b) */

int main()
{
    int x, y;    /* �w�q����ܼ� x, y*/
    printf("��J�Ĥ@�Ӽƭ�:");
    scanf("%d",&x);                      /* ���o�ܼ� x ���� */
    printf("��J�ĤG�Ӽƭ�:");
    scanf("%d",&y);                      /*���o�ܼ� y ���� */
    printf("��Ƥ������j�ȬO:%d\n",MAX(x, y));    /* MAX(x, y) ���X���j�� */
    
    system("pause");
    return 0;
}
