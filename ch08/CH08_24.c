#include<stdio.h>
#include<stdlib.h>

/*�w�q�U�إ����W�٫���*/
#define PI 3.14159
#define SHOW "The Circle's Area=" 
#define  RESULT r*r*PI

int main()
{	
	int r;
	
    printf("�п�J��b�|:");
 	scanf("%d",&r);/*��J�b�|��*/ 
    printf(SHOW"%f\n",RESULT);/*��X�����r��ε{�����O*/ 
 
     system("pause");
     return 0;	
}
