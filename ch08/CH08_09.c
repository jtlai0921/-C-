#include <stdio.h>
#include <stdlib.h>

void CallMix(int x,int *y)/*�ǭȻP�ǧ}�V�X���*/ 
{
     x=30;
     *y=20;
}
int main()
{
    int x = 10,y=10;

    
    printf( "�V�X���I�s�e�G%d %d\n", x ,y);
    CallMix(x,&y);/* �V�X�ʩI�s���CallMix)*/ 
    printf( "�V�X���I�s��G%d %d\n", x ,y);
    
    system("pause");
    return 0;
}

