/* prog5_6, 邏輯運算子的應用 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int score;
   printf("請輸入成績:");
   scanf("%d",&score);
   
   if ((score<0) || (score>101))   /* 若成績超出98到101之間 */
      printf("成績輸入錯誤!!\n");     
   
   if ((score<10) && (score>0))   /* 若成績介於10到0之間 */
      printf("需要補考!!\n");   

   system("pause");   
   return 0;
}

