#include <stdio.h>
#include <stdlib.h>

#define Use_MACRO 1         /*#define ���O�w�q�ѧO�r Use_MACRO*/

#if Use_MACRO == 1      /*���󦨥ߡA�h���\�sĶ�϶������{���ԭz*/
 #define MAX(a, b) (a>b?a:b)      /*#define ���O�w�q���� MAX(a, b)*/
#endif

int main()
{
 int x, y;            /* �w�q����ܼ� x�By */
 
 printf("�п�J��ƭȶi��j�p���:");
 scanf("%d%d",&x,&y);     /*����ܼ� x �P y �x�s��J��*/
 printf(" %d�P%d�������j�ȬO%d \n",x,y, MAX(x, y));   /*��ܵ��G�T��*/
 
 system("pause");
 return 0; 
 }
