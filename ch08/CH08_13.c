#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])/* �R�O�C�޼ƶǻ��ŧi */ 
{
    int i;
    if( argc == 1 )/* �u���{���W�� */ 
        printf( "�����w�ѼơI" );
    else
    {
        printf("�ҿ�J���ѼƬ��G\n");
        for( i = 0; i < argc; i++ )
            puts(argv[i]);/* �C�L argv�}�C�����e */ 
    }
    system("pause");
    return 0;
}
