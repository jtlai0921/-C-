#include<stdio.h>
#include<stdlib.h>

void transfer(double);/* ��ƭ쫬�ŧi */ 
 
int main()
{	
	double kg;
	extern double pound;
	/* �Q��extern�׹}��,�i�ޥΫŧi���ƤU�誺�~���ܼ� */ 
	printf("������^�S\n");
	printf("-----------------------------------\n");
    printf("�@����=%f�^�S\n",pound);
    printf("-----------------------------------\n");
	printf("�п�J�����:");
 	
    scanf("%lf",&kg);
   	transfer(kg);
   	
    system("pause");
 	return 0;	
}


double pound=2.204634;/*�ŧi�b��ƥ~���~���ܼ�*/
void transfer(double kg)
{
     
	printf("%.1lf����=%.3f�^�S\n",kg,pound*kg);
	/* ����Ʀb�~���ܼ�pound���U��,�]���i�����ϥ� */ 
}


