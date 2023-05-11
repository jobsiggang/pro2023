#include<stdio.h>
#include<stdlib.h>

int tri(int a , int b);
int main(){
	int area;
	int w,h;
	printf("¹Øº¯°ú ³ôÀÌ: ");
	scanf("%d %d",&w,&h);
	area=tri(w,h);
	printf("»ï°¢Çü¸éÀû %d\n",area);	
 return 0;
}
int tri(int a, int b){
	return a*b/2;
}
