#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct product{
	char *name;
	int price;
};	

int main()
{
	struct product *a,*b,*t;/*宣告結構指標*/ 
	
	a=(struct product *)malloc(sizeof(struct product));
	/*動態配置結構變數*/ 
	a->name=(char *)malloc(10*sizeof(char));
	strcpy(a->name,"顯示卡");
	a->price=2000;
	
	b=(struct product *)malloc(sizeof(struct product));
    /*動態配置結構變數*/	
	b->name=(char *)malloc(10*sizeof(char));
	/*動態配置結構中的成員變數*/
	strcpy(b->name,"記憶體");
	b->price=600;
	
	t=(struct product *)malloc(sizeof(struct product));
    /*動態配置結構變數*/		
	t->name=(char *)malloc(10*sizeof(char));
	/*動態配置結構中的成員變數*/
	t=a;
	a=b;
	b=t;/*交換過程*/ 
	
	printf("a 的品名：%s，售價：%d\n",a->name,a->price);
	printf("b 的品名：%s，售價：%d\n",b->name,b->price);
	
	system("PAUSE");
	return 0;
}
