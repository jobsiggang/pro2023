#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <time.h>
#include<string.h>
#define TEAM 5
#define STUDENT 30  
int main(){
	int cnt[TEAM]={0};
	int stu[STUDENT][2]={0};
 	srand (time(0));
 	int teamNum;
 	FILE *ft;
	for (int i=0; i<STUDENT;i++) //조입력 
	{
		stu[i][0]=i+1;
		while(stu[i][1]==0){
			teamNum=rand()%TEAM;
			if(cnt[teamNum]<6) {
				stu[i][1]=teamNum+1;
				cnt[teamNum]++;
			}
		}
	}
	ft=fopen("r.csv","w"); //파일출력 
	fprintf(ft,"번호, 조\n");	
	for(int i=0; i<STUDENT;i++)
	{ 
	 
	  fprintf(ft,"%d,%d\n",stu[i][0],stu[i][1]);
	  
	}

	for(int j=1; j<=TEAM; j++){ //조별출력 
 		printf("\n#### %d조####\n",j,j+1,j+2);
 		for(int i=0;i<STUDENT;i++)
 		   if(stu[i][1]==j) printf("%d번 %d조 \n",stu[i][0],stu[i][1]);
	}
	
	}
	

