#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
   int i;
   int grade[SIZE];
   int score[SIZE];

   for (i=0; i<SIZE; i++)
       grade[i] = rand() % 100;

   for (i=0; i<SIZE; i++)       // 배열은 score = grade; 로 복사 불가, 요소별로 복사
       score[i] = grade[i];

   for (i=0; i<SIZE; i++)
       printf("grade[%d] = %d, score[%d] = %d\n", i, grade[i], i, score[i]);

   return 0;
}
