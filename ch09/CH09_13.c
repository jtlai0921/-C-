#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct grades_node{
	char name[10];
	int mid;	/*�������Z*/
	int final;	/*�������Z*/
	int usual;	/*���ɦ��Z */
	float avg;	/*�������Z */
	struct grades_node *next;
};	
int main()
{
	int num=0,i;
	struct grades_node *ptr, *head, *newnode;
	int mid,final,usual;
	char name[10];
	
    head = ptr = newnode = NULL;
	printf("�п�J�G�m�W �������Z �������Z ���ɦ��Z \n");
	scanf("%s %d %d %d",name,&mid,&final,&usual);
	
    if(num!=-1 ){
		ptr=(struct node *)malloc(sizeof(struct grades_node));
		head=ptr;
		ptr->next=NULL;
		strcpy(ptr->name,name);
		ptr->mid=mid;
		ptr->final=final;
		ptr->usual=usual;
		ptr->avg=0.3*ptr->mid+0.4*ptr->final+0.3*ptr->usual;
	}	
	do{
		printf("�п�J�G�m�W �������Z �������Z ���ɦ��Z(��J -1 -1 -1 -1 ����)\n");
		scanf("%s %d %d %d",name,&mid,&final,&usual);
	
		newnode=(struct grades_node*)malloc(sizeof(struct grades_node));	
		/*�ʺA�t�m�s�`�I*/ 
		if(strcmp(name,"-1")==0){
			break;
		}
		ptr->next=newnode;
		ptr=newnode;
		ptr->next=NULL;
		strcpy(ptr->name,name);/*�����r���*/ 
		ptr->mid=mid;
		ptr->final=final;
		ptr->usual=usual;
		ptr->avg=0.3*ptr->mid+0.4*ptr->final+0.3*ptr->usual;/*���Z�p�⤽��*/	
	}while(strcmp(name,"-1")!=0);		
	
    ptr=head;
	printf("----------------------------------------------------------------\n");
	printf(" �m�W �������Z  �������Z  ���ɦ��Z  �������Z\n");
	printf("----------------------------------------------------------------\n");
	
	for(i=1;ptr!=NULL;i++){
		printf("%d�G%s\t%d\t%d\t%d\t%4.2f\n",
        i,ptr->name,ptr->mid,ptr->final,ptr->usual,ptr->avg);
		ptr=ptr->next;
	}	/*��X�Ҧ��ǥͦ��Z*/ 
	printf("----------------------------------------------------------------\n");
	
    system("PAUSE");
	return 0;
}
