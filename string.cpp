#include<stdio.h>
int main()
{
 char name[4][5]={"Kim","Lee","Park","Choi"};
 char string[]="KOREA"; 
 int num[][3]={1,2,3,4,5,6,7};
 //int score[4][6]; 
 int score[5];
 score[0]=90;
 //score[0]={90};
 //score={90};
// score[1]="90";
//score=[90];
printf("%d\n",num[2][0]);
 printf("%d\n",score[0]);
 printf("%s",name[0]);
 printf("%d\n",sizeof(score));
 printf("%c",string[4]);
 printf("%d",string[6]);
 return 0;
}//
