#include <stdio.h>
#include<stdlib.h>

int main()
{
	int static_array[5]={10,20,30,40,50}; 
	int *dynamic_array;/*�ŧi�ʺA�}�C���� */ 
	int i;
	
    dynamic_array=(int *)malloc(5*sizeof(int));
	/* �ʺA�ŧi5�Ӿ�ƪ����� */
	for(i=0;i<5;i++){
		dynamic_array[i]=(i+1)*10;
	}	
	printf("sizeof(static_array)=%d\n",sizeof(static_array));
	printf("sizeof(dynamic_array)=%d\n",sizeof(dynamic_array));	
	printf("-------------------------------------------------\n");
    
    for(i=0;i<5;i++){
		printf("dynamic_array[%d]=%d\n",i,*(dynamic_array++));
	}/* �Ldynamic_array++ ���B��,��X�Ҧ��}�C������ */ 
	
    system("PAUSE");
	return 0;
}
