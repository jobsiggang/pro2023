#include <stdio.h>

/*int factorial(int n)
{
    if (n == 1)      // n�� 1�� ��
        return 1;    // 1�� ��ȯ�ϰ� ���ȣ���� ����
    return n * factorial(n - 1);    // n�� factorial �Լ��� n - 1�� �־ ��ȯ�� ���� ����
}
*/
int main()
{
    //printf("%d", factorial(5));
    int i, f;
    for(i=5;i>=1;i--)
    {
    	printf("%d*",i);
    	f*=i;
	}
	printf("\b = %d",f);
    return 0;
}
