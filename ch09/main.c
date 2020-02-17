#include <stdio.h>
#include <stdlib.h>
#include "global.h"
float tax_rate=1.05;
int main(int argc, char *argv[])
{
	int kind,i;
	product *list;	
	printf("請輸入商品種類數：");
	scanf("%d",&kind);
	list = malloc(kind*sizeof(product));
	for(i=0;i<kind;i++){
		printf("請輸入第%d種商品名稱：",i+1);		
		scanf("%s",list[i].name);
		printf("請輸入第%d種商品單價：",i+1);		
		scanf("%d",&list[i].org_price);		
	}
	printf("----------------------------------------\n");
	printf("序號\t品名\t原價\t%含稅價\n");
	printf("----------------------------------------\n");
	for(i=0;i<kind;i++){
		counttax(&list[i]);
		printf("(%d)\t%s\t%3d\t%5.2f\n",i+1,list[i].name,list[i].org_price,list[i].tax_price);
	}		
	printf("----------------------------------------\n");
	system("PAUSE");
	return 0;	
}
