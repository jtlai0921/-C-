#include <stdio.h>
#include <stdlib.h>

int main()
{
	int check_key=0;   // �ŧi����ܼ� check_key
    
    while (check_key == 1) 
     printf("�{���i�Jwhile�j��\n");   /* while �j�� */
    
    do	      
     printf("�{���i�Jdo...while�j��\n");   
     while (check_key == 1);   /* do�Kwhile �j�� */
	
	system("pause");
	return 0;	
}
