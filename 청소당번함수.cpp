#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void suffle(int n, int* arr){
	int ra,tp;
	srand(time(NULL));
	for(int i=0;i<100;i++){
		ra=(rand()%n);
		tp=arr[0];
		arr[0]=arr[ra];
		arr[ra]=tp;
	}
} 
int main(){

	int n, arr[30];
	char job[6][20]={"닦기","쓸기","칠판","복도","사물함","책상"} ;
	for(int i=0;i<30;i++){
		arr[i]=i+1;
	} 
	n=sizeof(arr)/sizeof(arr[0]);
	suffle(n,arr);
	for(int i=0;i<6;i++){
		printf("%s : ",job[i]);
		for(int j=0; j<5;j++){
			printf("%d, ",arr[5*i+j]);
		}
		printf("\n\n");
	} 
}

