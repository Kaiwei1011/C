/* prog2_2, 函數的本體與程式區塊 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   printf("恩師好!我是學生黃塏崴\n");
   printf("我的300之第四題\n");
   int i=2;	/* 宣告整數i，並設值為2 */
   if(i<5)	/* if區塊由此開始 */
   {
      printf("變數i的值小於5"); 
      printf("\n");	/* 換行 */
   }				/* if區塊結束 */
   system("pause");
   return 0;
}

