#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void adjust_grades(float *,float *,int);

int main()
{
	float *grades1;	 
	float *grades2;	 
	int num;		/*�ǥͤH��*/ 
	int i;			/*�}�C����*/

	printf("�п�J�ǥͤH�ơG");
	scanf("%d",&num);
	grades1=(float *)malloc(num*sizeof(float));
	/* �ʺA�t�m�@���}�C */ 
	grades2=(float *)malloc(num*sizeof(float));	
	/* �ʺA�t�m�@���}�C */ 
	printf("�@��%d��ǥ�\n",num);
	printf("\n");
	
    for(i=0;i<num;i++){
		printf("�п�J��%d�ǥͪ����Z�G",i+1);
		scanf("%f",&grades1[i]);				
	}/* ��J�ǥͪ����Z */ 
	
    adjust_grades(grades1,grades2,num);
    /* �o��ƥ]�A�ǧ}�M�ǭȰѼƩI�s */ 
	printf("==�y��==��l���Z==�վ㦨�Z==\n");
	for(i=0;i<num;i++){
		printf("%4d    %4.2f    %4.2f\n",i+1,grades1[i],grades2[i]);		
	}	/* ��X�ץ��ᦨ�Z */ 
	printf("============================\n");


	system("PAUSE");
	return 0;
}

void adjust_grades(float *g1,float *g2,int num)
{
	int i;
	for(i=0;i<num;i++){
		g2[i]=10*sqrt(g1[i]);/*�}�ڸ��A���H10*/ 
	}	
}
