#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x=1, sum=1000;
	while(sum>=0) /* while�j�� */
    {
	  sum-=x; /* x=1,2,3...*/
	  x++;
	}
	printf("x=%d\n",x-1);/* ���e�w���[1�F */ 
	
	system("pause");
	return 0;	
}
