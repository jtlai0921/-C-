#include<stdio.h>
#include<stdlib.h>

/*定義各種巨集名稱型式*/
#define PI 3.14159
#define SHOW "The Circle's Area=" 
#define  RESULT r*r*PI

int main()
{	
	int r;
	
    printf("請輸入圓半徑:");
 	scanf("%d",&r);/*輸入半徑值*/ 
    printf(SHOW"%f\n",RESULT);/*輸出巨集字串及程式指令*/ 
 
     system("pause");
     return 0;	
}
