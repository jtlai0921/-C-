#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char **month;	  
	char temp[20];	
	int row,col;
	int i,j;	
	char month_name[12][10]=
     {"January","February","March","April","May","June","July","August",
      "September","October","November","December"};
     /* �ŧi�G���r���}�C�x�s12������W�� */ 
	month=(char **)malloc(12*sizeof(char *));
	/* �ʺA�t�m12�Ӧr�� */
    for(i=0;i<12;i++){
		strcpy(temp,"");	
		strcpy(temp,month_name[i]);
		printf("���׬��G%d\n",strlen(temp));		
		month[i]=(char *)malloc((strlen(temp)+1)*sizeof(char));
		/* �ʺA�t�m�Ӧr�����+1���r�� */ 
        strcpy(month[i],temp);/* �Ntemp����ƫ��w��month[i]���� */ 
	}
	for(i=0;i<12;i++){ 
		printf("%d �몺�^��W�١G%s\n",i+1,month[i]);
	}
	system("PAUSE");
	return 0;
}
