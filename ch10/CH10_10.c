#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE  *pFile; 	                  
    int length=10,width=5,height=30;
    /*�ܼƫŧi*/ 
    pFile=fopen("fileIO.txt","w+");
    /*�iŪ���μg�J�覡�}���ɮ�*/ 
    if(pFile != NULL){ 
  
       fprintf(pFile,"%d %d %d",length,width,height);
       /*�g�J���*/ 
       fscanf(pFile,"%d %d %d",&length,&width,&height);	
       /*Ū�����*/ 
       printf("��: %d \n�e: %d \n��: %d",length,width,height);

       fclose(pFile);
     }else 
       printf("fileIO.txt�}�Ҧ��~");
     
     system("pause");
     return 0; 
}
