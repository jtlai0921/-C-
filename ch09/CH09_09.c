#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 struct product{
	char name[10];	/*���~�W�� */
	int price;		/*���*/ 
	int amount;		/*�ƶq*/
}product;

int main()
{
	struct product *list;	 
	int i,kind_num;
	
	printf("�п�J�@���X�ذӫ~�G");
	scanf("%d",&kind_num);
	list=(struct product *)malloc(kind_num*sizeof(struct product));
	/*�H product *list �����ܼƨӰʺA�t�m�@���}�C*/
    for(i=0;i<kind_num;i++){
		printf("�п�J�~�W�G");		
		scanf("%s",list[i].name);
		printf("�п�J����G");
		scanf("%d",&list[i].price);
		printf("�п�J�ƶq�G");
		scanf("%d",&list[i].amount);
	}	
	printf("================\n");
	printf("�~�W  ���  �ƶq\n");
	printf("================\n");
	for(i=0;i<kind_num;i++){
		printf("%s  %d  %d\n",list[i].name,list[i].price,list[i].amount);
	}	
	printf("================\n");
	
	system("PAUSE");
	return 0;
}
