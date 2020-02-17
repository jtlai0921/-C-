#include <stdio.h>
#include <stdlib.h>

int main()
{
     
     char ch1='a';/* ch1じ跑计 */ 
     char ch2[]="a";/* ch2﹃跑计 */ 
     
     printf("ch1=%c Τ%d じ\n",ch1,sizeof(ch1));
     /* 块ch1の┮じ计 */ 
     printf("ch2=%s Τ%d じ\n",ch2,sizeof(ch2));
     /* 块ch2の┮じ计 */ 
      
     system("pause");
     return 0;
}
