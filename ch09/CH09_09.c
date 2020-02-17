#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 struct product{
	char name[10];	/*產品名稱 */
	int price;		/*單價*/ 
	int amount;		/*數量*/
}product;

int main()
{
	struct product *list;	 
	int i,kind_num;
	
	printf("請輸入共有幾種商品：");
	scanf("%d",&kind_num);
	list=(struct product *)malloc(kind_num*sizeof(struct product));
	/*以 product *list 指標變數來動態配置一維陣列*/
    for(i=0;i<kind_num;i++){
		printf("請輸入品名：");		
		scanf("%s",list[i].name);
		printf("請輸入單價：");
		scanf("%d",&list[i].price);
		printf("請輸入數量：");
		scanf("%d",&list[i].amount);
	}	
	printf("================\n");
	printf("品名  單價  數量\n");
	printf("================\n");
	for(i=0;i<kind_num;i++){
		printf("%s  %d  %d\n",list[i].name,list[i].price,list[i].amount);
	}	
	printf("================\n");
	
	system("PAUSE");
	return 0;
}
