#include <stdio.h> 
#include <fcntl.h>
#define  length    512 /*�w�q�@�ӱ`�ơA�N��Ū������*/

int main()
{
    int  fileID;     
    char buff[length];
    const char* filename="fileIO.txt"; 
    fileID = open(filename,O_RDONLY,0);
    /*�ŧiint���A�ȨӰO���}�Ҫ��ɮ�ID�X*/
    
    if(fileID!=-1)/*�T�{�ɮ׶}�Ҧ��\*/
    {
     if(read(fileID,buff,length)>0)/*�T�{�ɮ�Ū�����\*/
     {
      printf("%s \n",buff);
      }   
     } 
    close(fileID);    
    
    system("pause");
    return 0; 
}
