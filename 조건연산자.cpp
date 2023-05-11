#include<stdio.h>
int main(){
int score, pass;
printf("합격점:"), scanf("%d",&pass);
printf("점수: "), scanf("%d",&score);
score>=pass?printf("합격"):printf("불합격") ;
return 0;
}
