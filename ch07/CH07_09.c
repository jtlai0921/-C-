#include <stdio.h>
#include<stdlib.h>

int main()
{
	int array[]={1,2,3,4,5};
	int i;
	
    printf("array指標常數內容：%p，本身位址：%p\n",array,&array);
    printf("----------------------------------------------------\n");
	for(i=0;i<5;i++){
		printf("array[%d]=%d的位址：%p\n",i,array[i],&array[i]);		
	}
	system("PAUSE");
	return 0;
}
