#include <stdio.h>


void fruit(int n)
{
	printf("apple %d \n",n);
	if(n==5) return ;
	fruit(n+1);
	printf("jam %d \n",n);
}
int main(void)
{
	fruit(1);
	return 0;
}
