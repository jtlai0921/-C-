#include <stdio.h>
#include<stdlib.h>

int main()
{
	int *grades;	/*學生成績陣列指標*/ 
	int n;		/*學生人數*/ 
	int i;			
	int sum=0;		/*成績總和 */
	
    printf("請輸入學生人數：");
	scanf("%d",&n);
	grades=(int *)malloc(n*sizeof(int));
	/* 將指標grades指向動態配置記憶空間 */
	printf("共有%d位學生\n",n);
	printf("\n");
	
    for(i=0;i<n;i++){
		printf("請輸入第%d學生成績：",i+1);
		scanf("%d",&grades[i]);
		sum+=grades[i];	/* 累加成績 */			
	}
	printf("==座號==學生成績==\n");
	
    for(i=0;i<n;i++){
		printf("%4d    %4d\n",i+1,grades[i]);		
	}	
	printf("==================\n");
	printf("共有%d位學生，平均成績為%.2f\n",n,(float)sum/(float)n);
	/* 計算平均成績 */ 
    free(grades);/* 釋放指標指向的記憶空間 */
    
    system("PAUSE");
	return 0;
}
