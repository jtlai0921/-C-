#include <stdio.h>
#include <stdlib.h>

int main()
{
     /*定義一個整數陣列，存放學生成績*/ 
     int count,Student_Score[10]={ 58, 61, 77, 89, 38, 67, 92, 44, 47, 66};
     
     for (count=0; count < 10; count++)   /*for 迴圈*/
     {
     if(Student_Score[count] >= 60)    /*判斷成績是否及格*/
      continue;        /*continue 指令*/
     printf("%d號學生分數不及格  分數:%d\n",count+1,Student_Score[count]);
     
 }
 
    system("pause");
    return 0;
 }
