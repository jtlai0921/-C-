#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 110;
    char ch = 'A';

    puts( "�ܼƦW��  �ܼƭ�  �O�����}" );
    puts( "-----------------------------" );
    printf( "num\t   %d\t   %p\n", num, &num );
    /* ��Xnum���ȤΦ�} */ 
    printf( "ch\t   %c\t   %p\n", ch, &ch );
    /* ��Xch���ȤΦ�} */ 
    system("pause");
    return 0;
}
