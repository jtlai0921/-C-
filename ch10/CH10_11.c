#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE * pFile;
  char buffer[10];/*�ŧi�r���}�C*/ 

  pFile = fopen ( "fileIO.txt" , "w" );
  if(pFile!=NULL){
      printf("�п�J�z���X�ͦ~���(yyyy/MM/dd)?"); 
      gets(buffer);/*�Q��gets()��ƨ��o�ϥΪ̿�J�����*/
      fwrite (buffer , 1 , sizeof(buffer) , pFile );
      /*�H�϶��覡�g�J���*/ 
      fclose (pFile);                  
  }

  system("pause");
  return 0;
} 
