#include <stdio.h>

int sum(int);

int main() {
	int su, result,i;
	
	printf("1���� ���� ���� ���� : ");
	scanf("%d", &su);
	su=1;
	result = sum(su);
	/*
	for(i=1;i<100;i+=2){
   	 result+=i;
	}
	*/
	printf("1����100������ Ȧ������ %d�Դϴ�.\n",result);
	
	return 0;
}
int sum(int su) {
	if(su >100) 
		return  0;
	else
		return su + sum(su+2);
}

