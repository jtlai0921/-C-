#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x=1, sum=1000;
	while(sum>=0) /* while迴圈 */
    {
	  sum-=x; /* x=1,2,3...*/
	  x++;
	}
	printf("x=%d\n",x-1);/* 之前預先加1了 */ 
	
	system("pause");
	return 0;	
}
