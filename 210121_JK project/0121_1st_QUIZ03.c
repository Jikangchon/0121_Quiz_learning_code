#include <stdio.h>
// 최대값을 사용자한테 입력을 받고.
	// 1 - 최대값까지 출력
	// 최대값 중에 홀수값의 합을 출력
int main_04(void)
{
	/*
	int input = 0;
	printf("최대값을 입력해 주십시오. : ");
	scanf_s("%d", &input, sizeof(input)); //사용자로부터 입력을 받아
										  // input 변수에 저장.

	//1. 1 - 최대값부터 출력

	//2. 최대값 - 1까지 출력

	//3. 1 - 최대값 중 홀수들의 합을 출력
	*/

	int input = 0; int sum = 1;
	printf("최대값을 입력해 주십시오. : ");
	scanf_s("%d", &input, sizeof(input));

	for( int i = 1; i <= input; i++) {
		printf("%d\t", i);
	}

	printf("\n");

	for (int i = input; i > 0; i--) {
		printf("%d\t", i);
	}

	for (int i = 1; i <= input; i++) {
		if (i % 2 == 1) {
			sum += i; // sum = sum + i;
		}
	}

	printf("\n");

	printf("1부터 %d까지의 숫자들의 합은 %d입니다.", input, sum);

	return 0;
}