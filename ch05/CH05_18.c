/*break練習*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum=0;
    for(i=1; i<=200; i=i+2){
     if(i==101)
	      break;/* 跳出迴圈 */
		 sum+=i;	
	  }
     printf("1~99的奇數總和:%d\n",sum);
     
    system("pause");
    return 0;
 }
