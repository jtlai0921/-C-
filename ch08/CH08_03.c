#include <stdio.h>
#include <stdlib.h>

int mypower(int,int);
/*函數原型宣告*/ 
int main()
{ 		
	int x,y;
	printf("請輸入基底：");
	scanf("%d",&x);
	printf("請輸入次方：");
	scanf("%d",&y);
	printf("%d的%d次方為%d\n",x,y,mypower(x,y));
	system("PAUSE");
	return 0;
}

int mypower(int a,int b)/*定義了函數的主體*/
{
	int result=1;
	do{
		result*=a;
		b--;
	}while(b>0);
	
    return result;/*函數回傳值*/ 
}	
