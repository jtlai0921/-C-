#include <stdio.h>
#include <stdlib.h>

int main()
{
     
     char Str[]="World!";  
     printf("�r��Str�����e: %s\n", Str);  /* ��� Str�����e */
     printf("------------------------------\n");
     printf("%c\n",Str[0]); /* ��X�r�ꪺ�Ĥ@�Ӧr�� */ 
     printf("%c\n",Str[1]);/* ��X�r�ꪺ�ĤG�Ӧr�� */ 
     printf("%c\n",Str[2]);/* ��X�r�ꪺ�ĤT�Ӧr�� */ 
     printf("%c\n",Str[3]);/* ��X�r�ꪺ�ĥ|�Ӧr�� */ 
     printf("%c\n",Str[4]);/* ��X�r�ꪺ�Ĥ��Ӧr�� */ 
     printf("%c\n",Str[5]);/* ��X�r�ꪺ�Ĥ��Ӧr�� */ 
     printf("%c\n",Str[6]);/* ��X�r�ꪺ�ĤC�Ӧr�� */ 
     
     system("pause");
     return 0;
}
