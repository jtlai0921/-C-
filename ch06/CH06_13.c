#include <stdio.h>
#include <stdlib.h>

int main()
{
   char name[3][10],score[3][3];/* �ŧi�x�s�m�W�P���Z�}�C */ 
   int i,total;
   
   for(i=0;i<3;i++)
    {
    printf("�п�J�m�W�ΤT�즨�Z:"); 
    scanf("%s",&name[i]);/* ��J�C�@���m�W */
    scanf("%d %d %d",&score[i][0],&score[i][1],&score[i][2]);
    /* ��J�T�즨�Z */ 
    }
   printf("-------------------------------------\n");
   
   for(i=0;i<3;i++)
    {
     printf("%s\t%d\t%d\t%d",name[i],score[i][0],score[i][1],score[i][2]); 
     total=score[i][0]+score[i][1]+score[i][2];/* �p��T���`�� */ 
     printf("\t%d\n",total);/* ��X�T�쪺�`�� */ 
    }
    printf("-------------------------------------\n");
     
    system("pause");
    return 0;
}
