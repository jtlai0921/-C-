#include <stdio.h>
#include <stdlib.h>

int main()
{
     
     char c1='\a';/* 以跳脫字元來設值 */ 
     char c2=7;/* 以10進位來設值 */ 
     char c3='\7';/* 以8進位來設值 */ 
     char c4='\x7';/* 以16進位來設值 */ 
     
     
     char str[]="\x57\x4F\x52\x4c\x44\x21";/* 以16進位來設定WORLD! 字串 */
     
     printf("%c%c%c%c%s\n",c1,c2,c3,c4,str); /* 輸出四聲嗶聲與字串str */ 
        
     system("pause");
     return 0;
}
