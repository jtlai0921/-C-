#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a1=40, a2=58, a3=71;
	int temp;
	int *p1,*p2,*p3;
	
	
	  p1 = &a1; /* p1���Va1����} */ 
	  p2 = &a2; /* p2���Va2����} */ 
	  p3 = &a3; /* p3���Va3����} */

	  printf("p1����}:%p�A*p1�����e:%d\n",p1,*p1);
	  printf("p2����}:%p�A*p2�����e:%d\n",p2,*p2);
	  printf("p3����}:%p�A*p3�����e:%d\n",p3,*p3);
	
	system("PAUSE");
	return 0;
}
