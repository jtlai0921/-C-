#include <stdio.h>
#include <stdlib.h>

int mypower(int,int);
/*��ƭ쫬�ŧi*/ 
int main()
{ 		
	int x,y;
	printf("�п�J�򩳡G");
	scanf("%d",&x);
	printf("�п�J����G");
	scanf("%d",&y);
	printf("%d��%d���謰%d\n",x,y,mypower(x,y));
	system("PAUSE");
	return 0;
}

int mypower(int a,int b)/*�w�q�F��ƪ��D��*/
{
	int result=1;
	do{
		result*=a;
		b--;
	}while(b>0);
	
    return result;/*��Ʀ^�ǭ�*/ 
}	
