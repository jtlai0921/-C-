#include <stdio.h>
#include<stdlib.h>

int main()
{
	int static_array[5]={10,20,30,40,50}; 
	int *dynamic_array;/*宣告動態陣列指標 */ 
	int i;
	
    dynamic_array=(int *)malloc(5*sizeof(int));
	/* 動態宣告5個整數的元素 */
	for(i=0;i<5;i++){
		dynamic_array[i]=(i+1)*10;
	}	
	printf("sizeof(static_array)=%d\n",sizeof(static_array));
	printf("sizeof(dynamic_array)=%d\n",sizeof(dynamic_array));	
	printf("-------------------------------------------------\n");
    
    for(i=0;i<5;i++){
		printf("dynamic_array[%d]=%d\n",i,*(dynamic_array++));
	}/* 過dynamic_array++ 的運算,輸出所有陣列的元素 */ 
	
    system("PAUSE");
	return 0;
}
