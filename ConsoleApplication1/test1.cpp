#include <stdio.h>

int main()
{
	int a;
	int b;

	printf("변환할 값을 입력하시오 \n");
	scanf("%d", &a);

	printf("10진수 : %d\n 16진수 : %x\n 8진수 : %o\n", a, a, a);

	return 0;
}