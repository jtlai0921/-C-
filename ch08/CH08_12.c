#include<stdio.h>
#include<stdlib.h>

/*��ƭ쫬�ŧi,�Ĥ@���i�ٲ�,�䥦���ƪ����г������M���w�q����*/
void print_arr(int arr[][5],int,int);

int main()
{	
	/*�ŧi�ê�l�ƤG�����Z�}�C*/
	int score_arr[][5]={{59,69,73,90,45},{81,42,53,64,55}};
	print_arr(score_arr,2,5);/*�ǧ}�I�s�öǻ��G���}�C*/ 
    
    system("pause");	
 	return 0;	
}


void print_arr(int arr[][5],int r,int c)
{	
	int i,j;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c;j++)
	   		printf("%d  ",arr[i][j]);/*��X�G���}�C�U���������*/
       	printf("\n");
	}
}
