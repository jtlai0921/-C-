#include <stdio.h>
#include <stdlib.h>

int main()
{   
   int i=0;
   char str[50];/* �ŧi�@�r���}�C */ 
   
   printf("�п�J�@�Ӧr��:");
   gets(str); 
   
   while(str[i]!='\0')
   {
      if(str[i]>=65 && str[i]<=90)
         str[i]+=32;/* �j�g�r�����p�g�r�� */ 
       else if (str[i]>=97 && str[i]<=122)
         str[i]-=32;/* �p�g�r�����j�g�r�� */ 
      i++;      
   }
   printf("�j�p�g�ഫ�᪺�s�r��=%s\n",str); 
	
   system("pause");
   return 0;
}


