#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  fileID;                    
    const char *filename;/*�w�q�@���ɦW�ܼ�*/
    char *buff;/*�w�q�@�ӷǳƼg�J��ƪ��ܼ�*/
    int intRst;
    
    buff="1234567890";    
    filename="fileIO.txt";

    fileID = open(filename,O_CREAT | O_RDWR);   
    /*�}�ҫ��w���ɦW�A�Y�O�S���إߦ��ɮסA�åi��Ū�g*/
    intRst=write(fileID,buff,10);/*�N��Ƽg�J�ɮ�*/
    if(intRst!=-1)/*�P�_��ƬO�_�g�J���\*/
       printf("data write success\n");
    
    close(fileID);
    system("pause");
    return 0;
}
