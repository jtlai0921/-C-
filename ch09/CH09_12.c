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
	printf("請輸入一個數字：(輸入-1則結束)");
	scanf("%d",&num);
	
    if(num!=-1)
    {
		ptr=(struct node *)calloc(1,sizeof(struct node));
		head=ptr;
		ptr->next=NULL;
		ptr->value=num;
	}	/*建立首節點*/ 
	while(num!=-1){
		printf("請輸入一個數字：(輸入-1則結束)");
		scanf("%d",&num);
		if(num==-1){
			break;/* num=-1則跳出迴圈 */ 
		}
		newnode=(struct node*)calloc(1,sizeof(struct node));
        /*動態配置一個節點記憶體*/	
		ptr->next=newnode;
		ptr=newnode;/*ptr移到串列首*/ 
		ptr->next=NULL;/*指向空節點*/ 
		ptr->value=num;/*value成員值設定為num*/ 
	}	
	
	ptr=head;
	for(i=1;ptr!=NULL;i++){
		printf("第%d個節點是：%d\n",i,ptr->value);
		ptr=ptr->next;
	}/*輸出串列中的每一個節點*/ 
	
    system("PAUSE");
	return 0;
}
