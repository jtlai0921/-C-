#include <stdio.h>
#include <stdlib.h>
#include <string.h>/* �t�A <string.h> ���Y�� */

int main()
{
     
     char str1[40]; 
     char str2[40];
     
     printf("�п�J�Ĥ@�Ӧr��:"); 
     gets(str1);
     printf("�п�J�ĤG�Ӧr��:"); 
     gets(str2);
     
     strcat(str1,str2);/* �N��r��s�� */ 
     printf("%s\n",strlwr(str1));/* �N�r�ꤺ���j�g�r���ର�p�g�r�� */ 
     
     system("pause");
     return 0;
}
