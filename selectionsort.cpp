#include <stdio.h>
int main()
{
int i, j, temp;
int score[5]={9,};
//for(i=0;i<5;i++)
// printf("점수 : "), scanf("%d",&score[i]);
for(i=0;i<5;i++) {
  for(j=i+1;j<5;j++) {
    if(score[i]<score[j]) {
      temp = score[i];
      score[i] = score[j];
      score[j] = temp;
	 }
     }
   }
 printf("오름차순 정렬  : ");
 for(i=0;i<5;i++) 
  printf("%d ",score[i]);
 printf("\n");
 return 0;
}
