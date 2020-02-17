#include <stdio.h>
#include <stdlib.h>

struct Customer 
{ 
    int id; 
    char name[80];
    char telephone[10];
};/*�w�q�@��structure�A�D�n�ΨӰO���Ȥ᪺�������*/

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
			printf("�s�W�A�Ы�'1'");
            printf("\n");
			printf("�R���A�Ы�'2'");
			printf("\n");
			printf("��ܡA�Ы�'3'");
			printf("\n");
			printf("�����A�Ы�'4'");
			printf("\n");
			printf("�п��?");
			scanf("%d", &ch);
            
			switch (ch)/*�Q��switch�����J���D���T���Ӱ��檺�ۭq���*/
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
	       
	}/*�z�L�j�餣�_�����ѨϥΪ̬D��\�ඵ�ءA������U'4'�~������檺�D��Ҧ�*/
	
	system("pause");
	return 0;
}

void add(struct Customer myCustomer[256])
{
		struct Customer addedCustomer;
        FILE *pFile;
		int i;

		printf("�п�J'�Ȥ�s��'>>");
		scanf("%d", &addedCustomer.id);
		printf("�п�J'�Ȥ�W��'>>");
		scanf("%s", &addedCustomer.name);
		printf("�п�J'�Ȥ�q��'>>");
		scanf("%s", &addedCustomer.telephone);
        /*�z�Lscanf()����^���ϥΪ̿�J�����*/
		pFile = fopen("Customer.txt","a");

		if (isExist(addedCustomer.id, myCustomer)==0)
		{
			printf("\n");
			printf("���Ȥ�s���w�s�b!!");
			printf("\n");
		}/*�z�L�ۭq���isExist()���ˬd�ثe�s�W����ƬO�_�w�s�b*/
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

        printf("�п�J�w�ƭn�R����'�Ȥ�s��'>>");
        scanf("%d", &did);

        pFile = fopen("Customer.txt","r");
        /*�H��Ū���覡�}�Ҹ����*/

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
        /*�z�Lfeof()��ƨӧP�_�ɮ׫��ЬO�_Ū�����ɮץ���*/
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
			printf("��    ��:  %d   ", i);
			printf("�Ȥ�s��:  %d ;  ",myCustomer[i].id);
			printf("�Ȥ�W��:  %s",myCustomer[i].name);
			printf("�Ȥ�q��:  %s",myCustomer[i].telephone);			
			printf("\n");
		};
		fclose(pFile);
}
