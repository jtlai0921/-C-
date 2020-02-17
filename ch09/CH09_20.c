#include <stdio.h>
#include <stdlib.h>

 struct product
 {
     int id;
     int price; 
     float weight;
 }; /* 宣告結構型態 */ 
 
union product_U
 {
     int id;
     int price; 
     float weight;
 }; /* 宣告聯合型態 */

 int main(void)
 {
     struct product obj1;/* 結構變數 */ 
     union product_U obj2; /* 聯合變數 */    
     printf("結構變數佔用=%d 位元組\n",sizeof(obj1));
     printf("聯合變數佔用=%d 位元組\n",sizeof(obj2));
     
     system("pause");
     return 0;
 }
