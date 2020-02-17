#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 struct record{
	char *name; 
    /*name 就是表示商品名稱的字元指標，用以動態配置記憶體*/
	int price;
	int amount;
	int subtotal;
};/*定義一個資料結構 record以表示交易記錄*/

struct record * countsubtotal(char *,int,int);
/* 傳址呼叫與結構回傳值函數原型 */ 
int main()
{
	struct record **r;
	int i,num,price,amount,sum=0;	
	char name[20];
	printf("請輸入商品類別數量：");
	scanf("%d",&num);
	printf("共有%d種商品\n",num);
	
    r = (struct record **)malloc(num*sizeof(struct record));
	
    for(i=0;i<num;i++){
		printf("請輸入第%d種商品名稱 單價 數量：",i+1);
		scanf("%s %d %d",name,&price,&amount);
		r[i]=countsubtotal(name,price,amount);
        /*第 i 個陣列元素 record[i]來接受函數動態配置的結果*/		
	}
	printf("====================================\n");
	printf("  商品名稱  \t單價\t數量\t小計\n");
	printf("====================================\n");

	for(i=0;i<num;i++){
		printf("%12s\t%d\t%d\t%d\n",r[i]->name,r[i]->price,r[i]->amount,r[i]->subtotal);
		sum+=r[i]->subtotal;
	}
	printf("====================================\n");
	printf("總計：%d元\n",sum);
	free(r);
	system("PAUSE");
	return 0;
}
/*主要接受產品名稱、單價與數量三個參數*/
struct record * countsubtotal(char *s,int price,int amount)
{
	struct record *temp;	
	temp=(struct record *)malloc(sizeof(struct record));
	/*使用 record* 型態的指標變數 temp向系統索取一塊記憶體位址*/
	temp->name=(char *)malloc((strlen(s)+1)*sizeof(char));
	strcpy(temp->name,s);
	temp->price=price;
	temp->amount=amount;
	temp->subtotal=temp->price*temp->amount;
	return temp;
	/*將剛剛索取的記憶體位址，亦即 temp 變數內容回傳給主程式*/
}

