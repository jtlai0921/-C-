#include <stdio.h>
#include <fcntl.h>

int main() 
{
    const char *filename="fileIO.txt"; 
    int intRst;
    intRst=open(filename,O_RDONLY,0);
    /*�}�ҫ��w�ɦW���ɮסA�Ҧ�����Ū*/
    if(intRst==-1)
    { 
        printf ("file open fail \n");
        /*��^�Ǭ�-1��ܥ���*/
    } 
    else
    { 
        printf ("file open success  \n");
    /*���{������ɡA�w�g�s�bfileIO.txt�ɡA�ҥH���G�O���\*/
    } 

    system("pause");
    return 0;
}
