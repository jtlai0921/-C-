#include <stdio.h>
#include <stdlib.h>

int main()
{
     
     /* 四種字串宣告與設定初值模式 */ 
     char Str_1[6]="Hello";
     char Str_2[6]={ 'H', 'e', 'l', 'l','o','\0'};
     char Str_3[ ]="Hello";
     char Str_4[ ]={ 'H', 'e', 'l', 'l', 'o', '!' };
       
     
     printf("%s\n",Str_1);
     printf("%s\n",Str_2);
     printf("%s\n",Str_3);
     printf("%s\n",Str_4);
     
     system("pause");
     return 0;
}
