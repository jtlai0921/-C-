#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1,v2;
    char c1,c2;
    
    printf("�п�J�@�Ӿ��v1:");
    scanf("%d",&v1);/* �s���J�@�Ӿ�� */   
    printf("�п�J�@�Ӧr��c1:"); 
    scanf("%c",&c1);/* �s���J�@�Ӧr�� */ 
    printf("v1=%d c1��ASCII�X=%d\n",v1,c1); /* ��Xv1�Ȥ�c1��ASCII�X */    
    
    printf("�п�J�@�Ӿ��v2:");
    scanf("%d",&v2);/* �s���J�@�Ӿ�� */   
    printf("�п�J�@�Ӧr��c2:"); 
    scanf(" %c",&c2);/* �s���J�@�Ӧr��,��%c���e�Ť@�� */ 
    printf("v2=%d c2��ASCII�X=%d\n",v2,c2); /* ��Xv2�Ȥ�c2��ASCII�X */
   
    
    system("pause");
    return 0;
}
