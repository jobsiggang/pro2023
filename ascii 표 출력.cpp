#include<stdio.h>
int main(){
int i;
//char arr[]="JIN";
char arr[100]
for (i=0;i<128;i++){
	printf("%2d : %c\t\t",i,i);
	if(i%5==0)printf("\n");
	}
printf("\n");
for(i=0;i<sizeof(arr)-1;i++){
	printf("%X",arr[i]);
}
printf("\n");
return 0;	
	
}

