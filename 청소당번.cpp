#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(NULL));
	int ra, tp, arr[30];
	char job[6][20]={"닦기","쓸기","칠판","복도","사물함","책상"} ;
	for(int i=0;i<30;i++){
		arr[i]=i+1;
	} 
	for(int i=0;i<100;i++){
		ra=(rand()%29)+1;
		tp=arr[0];
		arr[0]=arr[ra];
		arr[ra]=tp;
	}
	for(int i=0;i<6;i++){
		printf("%s : ",job[i]);
		for(int j=0; j<5;j++){
			printf("%d, ",arr[5*i+j]);
		}
		printf("\n\n");
	}
}

