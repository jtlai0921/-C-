#include <stdio.h>
#include <stdlib.h>

struct node{
	int value;
	struct node *next;
};	

int main()
{
	int num=0,i;
	struct node *ptr,*head, *newnode;
	head = ptr = newnode = NULL;
	printf("�п�J�@�ӼƦr�G(��J-1�h����)");
	scanf("%d",&num);
	
    if(num!=-1)
    {
		ptr=(struct node *)calloc(1,sizeof(struct node));
		head=ptr;
		ptr->next=NULL;
		ptr->value=num;
	}	/*�إ߭��`�I*/ 
	while(num!=-1){
		printf("�п�J�@�ӼƦr�G(��J-1�h����)");
		scanf("%d",&num);
		if(num==-1){
			break;/* num=-1�h���X�j�� */ 
		}
		newnode=(struct node*)calloc(1,sizeof(struct node));
        /*�ʺA�t�m�@�Ӹ`�I�O����*/	
		ptr->next=newnode;
		ptr=newnode;/*ptr�����C��*/ 
		ptr->next=NULL;/*���V�Ÿ`�I*/ 
		ptr->value=num;/*value�����ȳ]�w��num*/ 
	}	
	
	ptr=head;
	for(i=1;ptr!=NULL;i++){
		printf("��%d�Ӹ`�I�O�G%d\n",i,ptr->value);
		ptr=ptr->next;
	}/*��X��C�����C�@�Ӹ`�I*/ 
	
    system("PAUSE");
	return 0;
}
