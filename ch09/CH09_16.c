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
   
 
void discount(struct parcel*);/* �ǧ}�I�s��ƭ쫬�ŧi */

int main()
{
    struct parcel desk={1500,{130,145,153,12.5}};         
    if (desk.price>=1200)
            discount(&desk); /*desk.price>=1200,�I�sdiscount()���*/ 
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
/* �w�q�ǧ}�I�s��� */ 
void discount(struct parcel *d1)
{
   printf("�������]�q���ԲӳW��λ���\n");
   d1->price=0.5*d1->price;
}
