#include <stdio.h>
#include <stdlib.h>

struct box /* �w�q���c */
   {
      int length;
      int width;
      int height;
      float weight;
   };
   struct parcel /*�_�����c */
   {
      int price;
      struct box scale;		
   };
   
struct parcel heavy(struct parcel,struct parcel);/* �ǭȩI�s����ƭ쫬�ŧi */
 

int main(void)
{
    struct parcel desk1={1500,{130,145,153,12.5}};   
    struct parcel desk2={2000,{160,115,150,13.8}}; 
    struct parcel desk; 
    
    desk=heavy(desk1,desk2);/* �I�sheavy��� */ 
    printf("���������]�q���ԲӳW��λ���\n");
    printf("====================================\n");
    printf("�]�q����= %d ��\n",desk.price);  
    printf("�]�q����= %d ����\n",desk.scale.length);
    printf("�]�q�e��= %d ����\n",desk.scale.width);
    printf("�]�q����= %d ����\n",desk.scale.height);
    printf("�]�q���q= %0.1f ����\n",desk.scale.weight); 
    printf("====================================\n");   
   
    system("pause");
    return 0;
}
/* �w�q��� */ 
struct parcel heavy(struct parcel d1,struct parcel d2)
{
   if (d1.scale.weight>d2.scale.weight)
    return d1; /* �Ǧ^d1���c�ܼ� */ 
    else
    return d2;  /* �Ǧ^d2���c�ܼ� */ 
}
