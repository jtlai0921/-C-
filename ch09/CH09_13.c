#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct grades_node{
	char name[10];
	int mid;	/*期中成績*/
	int final;	/*期末成績*/
	int usual;	/*平時成績 */
	float avg;	/*平均成績 */
	struct grades_node *next;
};	
int main()
{
	int num=0,i;
	struct grades_node *ptr, *head, *newnode;
	int mid,final,usual;
	char name[10];
	
    head = ptr = newnode = NULL;
	printf("請輸入：姓名 期中成績 期末成績 平時成績 \n");
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
		printf("請輸入：姓名 期中成績 期末成績 平時成績(輸入 -1 -1 -1 -1 結束)\n");
		scanf("%s %d %d %d",name,&mid,&final,&usual);
	
		newnode=(struct grades_node*)malloc(sizeof(struct grades_node));	
		/*動態配置新節點*/ 
		if(strcmp(name,"-1")==0){
			break;
		}
		ptr->next=newnode;
		ptr=newnode;
		ptr->next=NULL;
		strcpy(ptr->name,name);/*拷貝字串值*/ 
		ptr->mid=mid;
		ptr->final=final;
		ptr->usual=usual;
		ptr->avg=0.3*ptr->mid+0.4*ptr->final+0.3*ptr->usual;/*成績計算公式*/	
	}while(strcmp(name,"-1")!=0);		
	
    ptr=head;
	printf("----------------------------------------------------------------\n");
	printf(" 姓名 期中成績  期末成績  平時成績  平均成績\n");
	printf("----------------------------------------------------------------\n");
	
	for(i=1;ptr!=NULL;i++){
		printf("%d：%s\t%d\t%d\t%d\t%4.2f\n",
        i,ptr->name,ptr->mid,ptr->final,ptr->usual,ptr->avg);
		ptr=ptr->next;
	}	/*輸出所有學生成績*/ 
	printf("----------------------------------------------------------------\n");
	
    system("PAUSE");
	return 0;
}
