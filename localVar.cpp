#include<stdio.h>
int main(){
	int i=10, j=20;
	printf("1:i=%d, j=%d\n",i,j);
	for(i=1; i<=2;i++){
		printf("2:i=%d,j=%d\n",i,j);
		{
			int i=100,j=200;
			printf("3:i=%d,j=%d\n",i,j);		
			}
	}
	printf("4:i=%d,j=%d\n",i,j);
return 0;
}
