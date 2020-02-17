#include <stdio.h>
#include <stdlib.h>

int main()
{
   struct student
  {
    char name[10];/*可儲存10個字元的字串*/ 
    int math;
    int english;
  }; /* 定義結構 */ 

   struct student class1[3]=
    {{"周傑侖",87,69},{"蔡依玲",77,88},{"金成五",78,70}};
   /* 定義並設定結構陣列初始值 */ 
   int i;
   float math_Ave=0,english_Ave=0;
   
   for(i=0;i<3;i++)
   {
     math_Ave=math_Ave+class1[i].math;/* 計算數學總分 */ 
     english_Ave=english_Ave+class1[i].english;/* 計算英文總分 */ 
     printf("姓名:%s\t數學成績:%d\t英文成積:%d\n",class1[i].name,class1[i].math,
     class1[i].english); 
   }
   printf("--------------------------------------------\n");
   printf("數學平均分數:%4.2f  英文平均分數:%4.2f\n",math_Ave/3,english_Ave/3);
   
   system("pause");
   return 0;
}

