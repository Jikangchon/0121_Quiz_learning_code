#include <stdio.h>

int main_05(void)
{
	int input = 0; int sum = 1;
	printf("�ִ밪�� �Է��� �ּ���. : ");
	scanf_s("%d", &input, sizeof(input));

	for (int i = 1; i <= input; i++) {
		printf("%d\t", i);
	}

	printf("\n");

	return 0;
}