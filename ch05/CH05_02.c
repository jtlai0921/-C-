#include<stdio.h>
#include<stdlib.h>
 
int main()
  {
    
    int x,y,h;/*�ŧi�ܼ�*/
    float ans;/*��Ϊ����n*/
    
    printf("�п�J��Ϊ����B�e�B���G");
    scanf("%d%d%d",&x,&y,&h);/*�B�⦡*/
    ans=(float)(x+y)*h/2;/* ��έ��n���� */ 
    printf("��έ��n=%.2f\n",ans);
    
    system("pause");
    return 0;
  
   } 
