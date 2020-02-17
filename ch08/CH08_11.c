#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void adjust_grades(float *,float *,int);

int main()
{
	float *grades1;	 
	float *grades2;	 
	int num;		/*學生人數*/ 
	int i;			/*陣列註標*/

	printf("請輸入學生人數：");
	scanf("%d",&num);
	grades1=(float *)malloc(num*sizeof(float));
	/* 動態配置一維陣列 */ 
	grades2=(float *)malloc(num*sizeof(float));	
	/* 動態配置一維陣列 */ 
	printf("共有%d位學生\n",num);
	printf("\n");
	
    for(i=0;i<num;i++){
		printf("請輸入第%d學生的成績：",i+1);
		scanf("%f",&grades1[i]);				
	}/* 輸入學生的成績 */ 
	
    adjust_grades(grades1,grades2,num);
    /* 這函數包括傳址和傳值參數呼叫 */ 
	printf("==座號==原始成績==調整成績==\n");
	for(i=0;i<num;i++){
		printf("%4d    %4.2f    %4.2f\n",i+1,grades1[i],grades2[i]);		
	}	/* 輸出修正後成績 */ 
	printf("============================\n");


	system("PAUSE");
	return 0;
}

void adjust_grades(float *g1,float *g2,int num)
{
	int i;
	for(i=0;i<num;i++){
		g2[i]=10*sqrt(g1[i]);/*開根號再乘以10*/ 
	}	
}
