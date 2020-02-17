#include <stdio.h>
#include <stdlib.h>

struct Customer 
{ 
    int id; 
    char name[80];
    char telephone[10];
};/*定義一個structure，主要用來記錄客戶的相關資料*/

void add(struct Customer myCustomer[256]);
void del(struct Customer myCustomer[256]);
void list(struct Customer myCustomer[256]);
int isExist(int c, struct Customer tempCustomer[256]);

int main() 
{
    struct Customer Customer[256];
	int ch=0;        
	while (ch!=4) 
	{	
			printf("新增，請按'1'");
            printf("\n");
			printf("刪除，請按'2'");
			printf("\n");
			printf("顯示，請按'3'");
			printf("\n");
			printf("結束，請按'4'");
			printf("\n");
			printf("請選擇?");
			scanf("%d", &ch);
            
			switch (ch)/*利用switch控制輸入的挑選資訊應該執行的自訂函數*/
			{
				case 1:
                    add(Customer);
					printf("\n");
					break;
				case 2:
					del(Customer);
					break;
				case 3:
					list(Customer);
					printf("\n");
					break;
				case 4:
				default:
					break;
			}
	       
	}/*透過迴圈不斷的提供使用者挑選功能項目，直到按下'4'才結束選單的挑選模式*/
	
	system("pause");
	return 0;
}

void add(struct Customer myCustomer[256])
{
		struct Customer addedCustomer;
        FILE *pFile;
		int i;

		printf("請輸入'客戶編號'>>");
		scanf("%d", &addedCustomer.id);
		printf("請輸入'客戶名稱'>>");
		scanf("%s", &addedCustomer.name);
		printf("請輸入'客戶電話'>>");
		scanf("%s", &addedCustomer.telephone);
        /*透過scanf()函數擷取使用者輸入的資料*/
		pFile = fopen("Customer.txt","a");

		if (isExist(addedCustomer.id, myCustomer)==0)
		{
			printf("\n");
			printf("此客戶編號已存在!!");
			printf("\n");
		}/*透過自訂函數isExist()來檢查目前新增的資料是否已存在*/
        else
        {
		    fprintf(pFile,"\n%d %s %s", addedCustomer.id, addedCustomer.name,addedCustomer.telephone);
        }
        fclose(pFile);
}

void del(struct Customer myCustomer[256])
{
        FILE *pFile; 
        int i, k, did;

        printf("請輸入預備要刪除的'客戶編號'>>");
        scanf("%d", &did);

        pFile = fopen("Customer.txt","r");
        /*以唯讀的方式開啟資料檔*/

        i = 0;
        while (!feof(pFile))
        {
		      i = i+1;
              fscanf(pFile, "%d", &myCustomer[i].id);
              fscanf(pFile, "%s", &myCustomer[i].name);
        };
        fclose(pFile);
	
        pFile = fopen("Customer.txt","w");
	    
        for (k=1;k<=i; k++)
		{
		    if (myCustomer[k].id!=did)
            {
                fprintf(pFile,"%d %s",myCustomer[k].id,myCustomer[k].name);
                if (k<i)
                   printf("\n");
            }
		}
	    fclose(pFile);
};

int isExist(int id, struct Customer tempCustomer[256])
{
		FILE *pFile; 
		int i, k;

		pFile = fopen("Customer.txt","r");

        i = 0;
		while (!feof(pFile))
        /*透過feof()函數來判斷檔案指標是否讀取到檔案末端*/
        {
			 i = i+1;
             fscanf(pFile, "%d", &tempCustomer[i].id);
             fscanf(pFile, "%s", &tempCustomer[i].name);
        };
		fclose(pFile);
		
		for(k=1; k<=i; k++)
		{
			if (tempCustomer[k].id==id)
			   {
			      return 0;
			   }
        };
	    return 1;
}

void list(struct Customer myCustomer[256])
{
		FILE *pFile; 
		int i;

		pFile = fopen("Customer.txt","r");

        i = 0;
		while (!feof(pFile))
		{
			i = i+1;
            fscanf(pFile, "%d", &myCustomer[i].id);
            fscanf(pFile, "%s", &myCustomer[i].name);
            fscanf(pFile, "%s", &myCustomer[i].telephone);            
			printf("順    序:  %d   ", i);
			printf("客戶編號:  %d ;  ",myCustomer[i].id);
			printf("客戶名稱:  %s",myCustomer[i].name);
			printf("客戶電話:  %s",myCustomer[i].telephone);			
			printf("\n");
		};
		fclose(pFile);
}
