#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    
    float f1=1.1e-25;
      
    if (f1==1.1e-25)  
      printf("��̬۵�\n");/* �z�׬O�۵�,���]���x�s��ƵL�k��ܬ۵� */      
       
    if(fabs(f1-1.1e-25)<1e-30)
      printf("��̴X�G����۵�\n");/* �Q�ηL�p���t��,�ӥN�����۵� */ 
    
    system("pause");
    return 0;
}
