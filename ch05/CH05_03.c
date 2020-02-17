#include<stdio.h>
#include<stdlib.h>

int main()
{
  int t,total;
  printf("停車超過一小時,每小時收費40元\n");
  printf("請輸入停車幾小時: ");
  scanf("%d",&t);	/*輸入時數*/     
  if(t>=1)
  {
    total=t*40;	/*計算費用*/
    printf("停車%d小時,總費用為:%d元\n",t,total);    
  }
  system("pause");
  return 0; 
} 

