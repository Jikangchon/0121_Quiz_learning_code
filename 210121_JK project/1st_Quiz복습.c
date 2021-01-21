#include <stdio.h>

int main_05(void)
{
	int input = 0; int sum = 1;
	printf("최대값을 입력해 주세요. : ");
	scanf_s("%d", &input, sizeof(input));

	for (int i = 1; i <= input; i++) {
		printf("%d\t", i);
	}

	printf("\n");

	return 0;
}