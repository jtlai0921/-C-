#include <stdio.h>
#include <stdlib.h>

int main()
{
   char name[3][10],score[3][3];/* 宣告儲存姓名與成績陣列 */ 
   int i,total;
   
   for(i=0;i<3;i++)
    {
    printf("請輸入姓名及三科成績:"); 
    scanf("%s",&name[i]);/* 輸入每一筆姓名 */
    scanf("%d %d %d",&score[i][0],&score[i][1],&score[i][2]);
    /* 輸入三科成績 */ 
    }
   printf("-------------------------------------\n");
   
   for(i=0;i<3;i++)
    {
     printf("%s\t%d\t%d\t%d",name[i],score[i][0],score[i][1],score[i][2]); 
     total=score[i][0]+score[i][1]+score[i][2];/* 計算三科總分 */ 
     printf("\t%d\n",total);/* 輸出三科的總分 */ 
    }
    printf("-------------------------------------\n");
     
    system("pause");
    return 0;
}
