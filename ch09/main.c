#include <stdio.h>
#include <stdlib.h>
#include "global.h"
float tax_rate=1.05;
int main(int argc, char *argv[])
{
	int kind,i;
	product *list;	
	printf("�п�J�ӫ~�����ơG");
	scanf("%d",&kind);
	list = malloc(kind*sizeof(product));
	for(i=0;i<kind;i++){
		printf("�п�J��%d�ذӫ~�W�١G",i+1);		
		scanf("%s",list[i].name);
		printf("�п�J��%d�ذӫ~����G",i+1);		
		scanf("%d",&list[i].org_price);		
	}
	printf("----------------------------------------\n");
	printf("�Ǹ�\t�~�W\t���\t%�t�|��\n");
	printf("----------------------------------------\n");
	for(i=0;i<kind;i++){
		counttax(&list[i]);
		printf("(%d)\t%s\t%3d\t%5.2f\n",i+1,list[i].name,list[i].org_price,list[i].tax_price);
	}		
	printf("----------------------------------------\n");
	system("PAUSE");
	return 0;	
}
