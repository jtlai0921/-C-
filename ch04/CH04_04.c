#include<stdio.h>
#include<stdlib.h>

int main()
{	
	int a,b;
	
	printf("請輸入a與b的值:");
    scanf("%d%d",&a,&b);
     
	printf("%d-%d%%6+12*%d/2=%d\n",a,b,b,a-b%6+12*b/2);
    printf("(%d*5)%%8/5-2*%d=%d\n",a,b,(a*5)%8/5-2*b);
    printf("(%d%%8)/12*6+12-%d/2=%d\n\n",a,b,(a%8)/12*6+12-b/2);
    /* 輸出三個運算式及結果 */ 
    system("pause");
    return 0;
} 
