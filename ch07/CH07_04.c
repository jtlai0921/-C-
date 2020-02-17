#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a1=40, a2=58, a3=71;
	int temp;
	int *p1,*p2,*p3;
	
	
	  p1 = &a1; /* p1指向a1的位址 */ 
	  p2 = &a2; /* p2指向a2的位址 */ 
	  p3 = &a3; /* p3指向a3的位址 */

	  printf("p1之位址:%p，*p1的內容:%d\n",p1,*p1);
	  printf("p2之位址:%p，*p2的內容:%d\n",p2,*p2);
	  printf("p3之位址:%p，*p3的內容:%d\n",p3,*p3);
	
	system("PAUSE");
	return 0;
}
