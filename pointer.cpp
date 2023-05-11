#include <stdio.h>

int main() {
	int num = 100;
	int *ip = &num;
	
	printf("%d\n", *ip);
			printf("%d\n", ip);

		printf("%d\n", ip+1);

	return 0;
}
