#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct product{
	char name[10];		/*���~�W��*/ 
	int price;			/*��� */
	int amount;			/*�ƶq */
};

int main()
{
	
    struct product *list;	 
	list=(struct product *)malloc(sizeof(struct product));
	/*�ʺA�t�m�@���c�ܼ�*/ 
	printf("�п�J�~�W�G");
	scanf("%s",list->name);
	printf("�п�J����G");
	scanf("%d",&list->price);
	printf("�п�J�ƶq�G");
	scanf("%d",&list->amount);
	printf("================\n");
	printf("�~�W  ���  �ƶq\n");
	printf("================\n");
	printf("%s  %d  %d\n",list->name,list->price,list->amount);
	/*��X�U�����c����*/ 
	printf("================\n");
	
	system("PAUSE");
	return 0;
}
