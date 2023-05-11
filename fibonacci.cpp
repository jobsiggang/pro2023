#include <stdio.h>
 
 
/**********************************************************
* Fibonacci(0)=0. Fibonacci(1)=1.                         *
* Fibonacci(n)=Fibonacci(n-1)+Fibonacci(n-2). (but, n>=2) *
**********************************************************/
unsigned int Fibonacci(unsigned int n)
{
    //printf("%d\n",n);
	if(n<2)
        return n;
    else
        return Fibonacci(n-1)+Fibonacci(n-2);
}
 
 
int main()
{
    int i;
 
    for( i=0; i<=10; i++)
        printf("Fibonacci(%d) = %d\n", i, Fibonacci(i));
 
    return 0;
}

