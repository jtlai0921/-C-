#include<stdio.h>
#include <stdlib.h>

int main()
{	
	/*�ŧi�r���ܼ�*/
	char char1='Y';/* �[�W��޸� */
	char char2=88;
	/*�L�X�r���M����ASCII�X*/
 	
    printf("�r��char1= %c �� ASCII�X=%d\n",char1,char1);
 	char1=char1+32; /* �r�����B��\�� */
   	printf("�r��char1= %c �� ASCII�X= %d\n",char1,char1); 
     /* �L�X�[�k�B��᪺�r���MASCII�X */  
    
    printf("�r��char2= %c �� ASCII�X=%d\n",char2,char2);
 	char2=char2-32; /* �r�����B��\�� */
   	printf("�r��char2= %c �� ASCII�X= %d\n",char2,char2); 
     /* �L�X��k�B��᪺�r���MASCII�X */  
    
    system("pause");
    return 0;
} 
