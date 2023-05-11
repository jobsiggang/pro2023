#include<stdio.h>
int f1();
int f2();
int main(){
	int f1r, f2r;
	f1r=f1();
	for (int i=0; i<5;i++)
	{
		f2r=f2();
	}
	f1r=f1();
	f1r=f1();
	printf("f1호출 %d\n",f1r);
	printf("f2호출 %d\n",f2r);
	return 0;
}
int f1(){
	static int f1c=0;
	f1c++;
	return f1c;
}
int f2(){
	static int f2c=0;
	f2c++;
	return f2c;
}
