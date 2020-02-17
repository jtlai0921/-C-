#include<stdio.h>
#include<stdlib.h>

void transfer(double);/* ㄧ计 */ 
 
int main()
{	
	double kg;
	extern double pound;
	/* ノextern箎迭,まノㄧ计よ场跑计 */ 
	printf("そょ锣璣絊\n");
	printf("-----------------------------------\n");
    printf("そょ=%f璣絊\n",pound);
    printf("-----------------------------------\n");
	printf("叫块そょ计:");
 	
    scanf("%lf",&kg);
   	transfer(kg);
   	
    system("pause");
 	return 0;	
}


double pound=2.204634;/*ㄧ计场跑计*/
void transfer(double kg)
{
     
	printf("%.1lfそょ=%.3f璣絊\n",kg,pound*kg);
	/* ㄧ计场跑计poundよ,钡ㄏノ */ 
}


