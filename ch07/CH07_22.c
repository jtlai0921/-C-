#include <stdio.h>
#include<stdlib.h>

int main()
{
	char **star;	/* �ŧi�r������ */ 
	int row,col;
	int i,j;
	
    printf("�п�J�C�ơG");
	scanf("%d",&row);
	printf("�п�J��ơG");
	scanf("%d",&col);
	
	star=(char **)malloc(row*sizeof(char *));
	/*�ϥ� star �������аt�m�@�Ө㦳 row�Ӥ������@���}�C*/
	for(i=0;i<row;i++){
		star[i]=(char *)malloc(col*sizeof(char));
	/*�ӧO���ͤ@�Ө㦳 col�Ӥ������@���}�C*/	
        for(j=0;j<col;j++){
			star[i][j]='*';
		}	
	}
	
    for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%c ",star[i][j]);
		}/* ��X���G���}�C�����e */ 
		printf("\n");
	}	
	
    system("PAUSE");
	return 0;
}
