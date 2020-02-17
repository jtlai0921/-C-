#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct product{
	char name[10];		/*產品名稱*/ 
	int price;			/*單價 */
	int amount;			/*數量 */
};

int main()
{
	
    struct product *list;	 
	list=(struct product *)malloc(sizeof(struct product));
	/*動態配置一結構變數*/ 
	printf("請輸入品名：");
	scanf("%s",list->name);
	printf("請輸入單價：");
	scanf("%d",&list->price);
	printf("請輸入數量：");
	scanf("%d",&list->amount);
	printf("================\n");
	printf("品名  單價  數量\n");
	printf("================\n");
	printf("%s  %d  %d\n",list->name,list->price,list->amount);
	/*輸出各項結構成員*/ 
	printf("================\n");
	
	system("PAUSE");
	return 0;
}
