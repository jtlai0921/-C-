#include <stdio.h>
#include <stdlib.h>

int main()
{
    
      char name[15];/*以字元陣列宣告 */ 
      char *number="Please input your name:";
      /* 以字串指標宣告 */ 
      printf("%s",number);
      scanf("%s",&name);/*輸入字串*/ 
      printf("Your name is:%s",name);
      printf("\n");      

      system("pause");
      return 0;
 }
