#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 struct record{
	char *name; 
    /*name �N�O��ܰӫ~�W�٪��r�����СA�ΥH�ʺA�t�m�O����*/
	int price;
	int amount;
	int subtotal;
};/*�w�q�@�Ӹ�Ƶ��c record�H��ܥ���O��*/

struct record * countsubtotal(char *,int,int);
/* �ǧ}�I�s�P���c�^�ǭȨ�ƭ쫬 */ 
int main()
{
	struct record **r;
	int i,num,price,amount,sum=0;	
	char name[20];
	printf("�п�J�ӫ~���O�ƶq�G");
	scanf("%d",&num);
	printf("�@��%d�ذӫ~\n",num);
	
    r = (struct record **)malloc(num*sizeof(struct record));
	
    for(i=0;i<num;i++){
		printf("�п�J��%d�ذӫ~�W�� ��� �ƶq�G",i+1);
		scanf("%s %d %d",name,&price,&amount);
		r[i]=countsubtotal(name,price,amount);
        /*�� i �Ӱ}�C���� record[i]�ӱ�����ưʺA�t�m�����G*/		
	}
	printf("====================================\n");
	printf("  �ӫ~�W��  \t���\t�ƶq\t�p�p\n");
	printf("====================================\n");

	for(i=0;i<num;i++){
		printf("%12s\t%d\t%d\t%d\n",r[i]->name,r[i]->price,r[i]->amount,r[i]->subtotal);
		sum+=r[i]->subtotal;
	}
	printf("====================================\n");
	printf("�`�p�G%d��\n",sum);
	free(r);
	system("PAUSE");
	return 0;
}
/*�D�n�������~�W�١B����P�ƶq�T�ӰѼ�*/
struct record * countsubtotal(char *s,int price,int amount)
{
	struct record *temp;	
	temp=(struct record *)malloc(sizeof(struct record));
	/*�ϥ� record* ���A�������ܼ� temp�V�t�ί����@���O�����}*/
	temp->name=(char *)malloc((strlen(s)+1)*sizeof(char));
	strcpy(temp->name,s);
	temp->price=price;
	temp->amount=amount;
	temp->subtotal=temp->price*temp->amount;
	return temp;
	/*�N���������O�����}�A��Y temp �ܼƤ��e�^�ǵ��D�{��*/
}

