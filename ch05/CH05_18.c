/*break�m��*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum=0;
    for(i=1; i<=200; i=i+2){
     if(i==101)
	      break;/* ���X�j�� */
		 sum+=i;	
	  }
     printf("1~99���_���`�M:%d\n",sum);
     
    system("pause");
    return 0;
 }
