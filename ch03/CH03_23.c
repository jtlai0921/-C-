#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c1,c2;  /* �w�q�r���ܼ� c1,c2 */
     
    printf("�����@���~��(getche())...");
    c1=getche();/* �ϥ�getche()��J�r�� */
    printf("  ��J���r��:%c\n",c1); 
    printf("\n"); 
         
    printf("�����@���~��(getch())...");
    c2=getch();/* �ϥ�getche()��J�r�� */
    printf("  ��J���r��:%c\n",c2); 
    printf("\n"); 
    
    system("pause");
    return 0;
}
