#include <stdio.h>
#include <stdlib.h>
int* add_value();  /* �Ǧ^���Э� */ 

int main()
{
     int *ptr;
     ptr = add_value();
     /*�I�sadd_value ()��ơA�öǭȵ�ptr�����ܼ�*/
     printf( "*ptr=%d\n", *ptr );
     /*��Xptr�����ܼƪ����e*/
     system("pause");
     return 0;
}
 
 /* ���ϥΪ̿�J��Ӿ��,�ìۥ[ */
 /* �Ǧ^���Э�       */
int* add_value ()
{
     int *x;
     int input,input1;
     x = &input;
     
     printf( "�п�J��Ӿ�ơG" );
     scanf( "%d%d",&input,&input1 );
     /*��Jinput�Pinput1�ܼƪ���*/
     input=input+input1;/*��Ƭۥ[*/ 
 
     return x;
}
