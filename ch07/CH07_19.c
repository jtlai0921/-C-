#include <stdio.h>
#include<stdlib.h>

int main()
{
	int *grades;	/*�ǥͦ��Z�}�C����*/ 
	int n;		/*�ǥͤH��*/ 
	int i;			
	int sum=0;		/*���Z�`�M */
	
    printf("�п�J�ǥͤH�ơG");
	scanf("%d",&n);
	grades=(int *)malloc(n*sizeof(int));
	/* �N����grades���V�ʺA�t�m�O�ЪŶ� */
	printf("�@��%d��ǥ�\n",n);
	printf("\n");
	
    for(i=0;i<n;i++){
		printf("�п�J��%d�ǥͦ��Z�G",i+1);
		scanf("%d",&grades[i]);
		sum+=grades[i];	/* �֥[���Z */			
	}
	printf("==�y��==�ǥͦ��Z==\n");
	
    for(i=0;i<n;i++){
		printf("%4d    %4d\n",i+1,grades[i]);		
	}	
	printf("==================\n");
	printf("�@��%d��ǥ͡A�������Z��%.2f\n",n,(float)sum/(float)n);
	/* �p�⥭�����Z */ 
    free(grades);/* ������Ы��V���O�ЪŶ� */
    
    system("PAUSE");
	return 0;
}
