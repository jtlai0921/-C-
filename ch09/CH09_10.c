#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct product{
	char *name;
	int price;
};	

int main()
{
	struct product *a,*b,*t;/*�ŧi���c����*/ 
	
	a=(struct product *)malloc(sizeof(struct product));
	/*�ʺA�t�m���c�ܼ�*/ 
	a->name=(char *)malloc(10*sizeof(char));
	strcpy(a->name,"��ܥd");
	a->price=2000;
	
	b=(struct product *)malloc(sizeof(struct product));
    /*�ʺA�t�m���c�ܼ�*/	
	b->name=(char *)malloc(10*sizeof(char));
	/*�ʺA�t�m���c���������ܼ�*/
	strcpy(b->name,"�O����");
	b->price=600;
	
	t=(struct product *)malloc(sizeof(struct product));
    /*�ʺA�t�m���c�ܼ�*/		
	t->name=(char *)malloc(10*sizeof(char));
	/*�ʺA�t�m���c���������ܼ�*/
	t=a;
	a=b;
	b=t;/*�洫�L�{*/ 
	
	printf("a ���~�W�G%s�A����G%d\n",a->name,a->price);
	printf("b ���~�W�G%s�A����G%d\n",b->name,b->price);
	
	system("PAUSE");
	return 0;
}
