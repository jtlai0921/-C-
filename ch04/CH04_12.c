#include<stdio.h>
#include<stdlib.h>

int main()
{	
    int a, b;
    int x=10, y=20, z=30;/*�ŧi�h���ܼƫ��w*/
    a=b=5;/*�Q�βV�X���w�B��l,�p��a,b,c*/
    printf("a= %d, b= %d\n",a,b);
    printf("x= %d, y= %d, z= %d\n",x,y,z);
    printf("�p�⦡:x*=a+=y%%=b-=z*=5\n");
    x*=a+=y%=b-=z*=5;/*�Q�βV�X���w�B��l,�p��U�C�⦡*/
    printf("x=%d\n",x);
    
    system("pause");
    return 0;
}
