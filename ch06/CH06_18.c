#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char Word[40];/* �ŧi�r���}�C */ 
   int i,j=0;
   
   printf("�п�J�r��:"); 
   gets(Word);
   
   for(i=strlen(Word)-1;i>=0;i--)/*�ϥ�strlen(���*/	
     printf("%c",Word[i]);/* �ϦV�C�L�r�� */ 
      
   printf("\n");
   
   system("pause");
   return 0;
}

