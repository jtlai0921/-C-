#include <stdio.h>
#include <stdlib.h>

int main() 
{
  FILE *pFile;
  char c; 
  int i;

  pFile = fopen("fileIO.txt", "w");
  if(pFile!=NULL) {
    for(i='A';i<='Z';i++){
       putc(i,pFile); 
    } 

    fclose(pFile);              /*������Ƭy*/
  }
  
  pFile = fopen("fileIO.txt", "r");
  if(pFile!=NULL) {
    for(i=1;i<=5;i++) {
        c=getc(pFile) ;
        printf("%c",c) ;
        rewind(pFile); 
    /*����j��ɡA�C���Ҹ��^��Ƭy�_�I�A�T��X��Ū��Ĥ@�Ӧr��*/
    } 

    fclose(pFile);              /*������Ƭy*/
  }  
  
  system("pause");
  return 0;
}
