#include <stdio.h>
#include <stdlib.h> 

 int main()
 {
     struct
     {
        char name[10];
        int score;
        int ID;
     } s1={ "Justin",90,10001};/* 不定義結構型態,卻宣告結構變數 */
     /* 設定結構變數成員時,必須以大括號括住 */ 
     printf("s1.name = %s\n", s1.name);
     printf("s1.score = %d\n", s1.score);
     printf("s1.ID = %d\n", s1.ID);
     
     system("pause");
     return 0;
 }
