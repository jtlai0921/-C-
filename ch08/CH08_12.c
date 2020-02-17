#include<stdio.h>
#include<stdlib.h>

/*函數原型宣告,第一維可省略,其它維數的註標都必須清楚定義長度*/
void print_arr(int arr[][5],int,int);

int main()
{	
	/*宣告並初始化二維成績陣列*/
	int score_arr[][5]={{59,69,73,90,45},{81,42,53,64,55}};
	print_arr(score_arr,2,5);/*傳址呼叫並傳遞二維陣列*/ 
    
    system("pause");	
 	return 0;	
}


void print_arr(int arr[][5],int r,int c)
{	
	int i,j;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c;j++)
	   		printf("%d  ",arr[i][j]);/*輸出二維陣列各元素的函數*/
       	printf("\n");
	}
}
