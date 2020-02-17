#include <stdio.h>
#include<stdlib.h>

int main()
{
	int a1=10;
	int *ptr1,**ptr2;
	int ***ptr3;
	
    ptr1=&a1; /* ptr1是指向a1的指標 */
	ptr2=&ptr1;/* ptr2是指向ptr1的指標 */
	ptr3=&ptr2;/* ptr3是指向ptr2的指標 */ 
	
	printf("變數 a1 之位址:%p，內容:%d\n",&a1,a1);
	printf("變數 ptr1 之位址:%p，ptr1的內容:%p，*ptr1：%d\n",&ptr1,ptr1,*ptr1);
	printf("變數 ptr2 之位址:%p，ptr2的內容:%p，**ptr2：%d\n",&ptr2,ptr2,**ptr2);
	printf("變數 ptr3 之位址:%p，ptr3的內容:%p，***ptr3：%d\n",&ptr3,ptr3,***ptr3);
	
    system("PAUSE");
	return 0;
}
