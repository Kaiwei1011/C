/* prog5_6, �޿�B��l������ */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int score;
   printf("�п�J���Z:");
   scanf("%d",&score);
   
   if ((score<0) || (score>101))   /* �Y���Z�W�X98��101���� */
      printf("���Z��J���~!!\n");     
   
   if ((score<10) && (score>0))   /* �Y���Z����10��0���� */
      printf("�ݭn�ɦ�!!\n");   

   system("pause");   
   return 0;
}

