#include <stdio.h>
#include<stdlib.h>

int main()
{
	char **month;	  
	int row,col;
	int i,j;	
	
     char month_name[12][10]=
     {"January","February","March","April","May","June","July","August",
      "September","October","November","December"};
	 /* �ŧi�G���r���}�C�x�s12������W�� */ 
     month=(char **)malloc(12*sizeof(char *));
	 /* �ʺA�t�m12�Ӧr�� */ 
	 for(i=0;i<12;i++){
		month[i]=(char *)malloc(10*sizeof(char));
		/* �ʺA�t�m10�Ӧr�� */ 
		month[i]=month_name[i];
	  }
	 for(i=0;i<12;i++){
		printf("%d �몺�^��W�١G%s\n",i+1,month[i]);
	 }
	
    system("PAUSE");
	return 0;
}
