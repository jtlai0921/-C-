#include <stdio.h>
#include <stdlib.h>
#include <string.h>/* �ϥΨ�strlen()��� */ 

int main()
{
	char *name;
	int i;
	
    printf("�п�J�^��r����סG");
	scanf("%d",&i);
	name = (char *)malloc((i+1)*sizeof(char));
	/* i+1�O���F�n�N�r�ꪺ�����r�� '\0' �[�J��r��̫�*/ 
	printf("�п�J�^��r��G");
	scanf("%s",name);
	strcat(name,"\0");
	printf("-%s-\n",name);
	printf("�r����סG%d\n",strlen(name));
	
    system("PAUSE");
	return 0;
}
