#include <stdio.h>
#include <stdlib.h>

int main() 
{
  FILE *pFile;
  char c[30]; 
  char *d;
  int n;

  pFile = fopen("fileIO.txt", "r");
  if(pFile!=NULL) {
    printf("�ɮ׶}�Ҧ��\\\n");
    
    n = fread(c, 1, 10, pFile); /*Ū����Ƭy��ơA��J���w�����СC */
    c[n] = '\0';                /*�]�w�̫�@�Ӧr����\0 */

    printf("%s\n", c);          /*�L�X�r�� */
    printf("Ū�X���r����: %d\n\n", n);

    fclose(pFile);              /*������Ƭy */

    pFile = fopen("fileIO.txt", "r");
    n = fread(d, 1, 10, pFile); /*Ū����Ƭy��ơA��J���w�����СC  */

    printf("%s\n", d);
    printf("Ū�X���r����: %d\n\n", n);

    fclose(pFile);              
    
    system("pause");
    return 0;
  }else {
    printf("�ɮ׶}�ҿ��~\n");
    return 1;        
  }
}
