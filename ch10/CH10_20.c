#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  fileID,i;                        
    const char *filename;
    char buff[]={'A','B','C','D','E'};/*�w�q�@�Ӧr���}�C*/
    
    filename="fileIO.txt";

    fileID = open(filename,O_CREAT | O_RDWR);   
    /*�}�ҫ��w���ɦW�A�Y�O�S���إߦ��ɮסA�åi��Ū�g*/
    for(i=1;i<=4;i++)/*�j��@����|��*/
    {
      write(fileID,buff,5);/*�g�Jbuff�N����Ʀ��ɮ�*/      
      lseek(fileID,-i,SEEK_CUR);/*�]�w�ɮ�Ū�g���Хѥثe��m����-i*/
      write(fileID,"-",1);           
    }
    
    close(fileID);
    
    system("pause");
    return 0;
}
