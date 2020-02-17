#include <stdio.h>                 
#include <stdlib.h>

int main()                      
{
     auto int iVar=5;/* 定義 auto整數變數 iVar */

	 printf("進入程式區塊前的iVar=%d\n",iVar); 

	 /* 底下以大括號區隔出一段程式區塊 */
     {
		 auto int iVar=10;                          /* 程式區塊中定義整數變數 iVar */
         printf("程式區塊中的 iVar=%d\n",iVar);
	 }
     printf("離開程式區塊的 iVar=%d\n",iVar);
     
     system("pause");
     return 0;

}
