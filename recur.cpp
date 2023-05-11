#include <stdio.h>

int sum(int);

int main() {
	int su, result,i;
	
	printf("1부터 합을 구할 수는 : ");
	scanf("%d", &su);
	su=1;
	result = sum(su);
	/*
	for(i=1;i<100;i+=2){
   	 result+=i;
	}
	*/
	printf("1부터100까지의 홀수합은 %d입니다.\n",result);
	
	return 0;
}
int sum(int su) {
	if(su >100) 
		return  0;
	else
		return su + sum(su+2);
}

