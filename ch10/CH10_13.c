#include <stdio.h>
#include <stdlib.h>

int main() 
{
  FILE *pFile;
  int i;
  char c; 

  pFile = fopen("fileIO.txt", "w");
  if(pFile!=NULL) {
    for(i='A';i<='Z';i++){
       putc(i,pFile); 
    } /*�إ�A~Z����Ʃ�fileIO.txt�ɮפ�*/

    fclose(pFile);              
  }
  
  pFile = fopen("fileIO.txt", "r");
  if(pFile!=NULL) {
    for(i=1;i<=5;i++) {
        c=getc(pFile) ;
        printf("%c",c) ;
        fseek(pFile,3,SEEK_CUR);/*�Q��fseek()��ơA�C�����D3�Ӷ���*/
    } /*�Q��for�j��A�@���椭��*/

    fclose(pFile);              
  }  
  
  system("pause");
  return 0;
}
