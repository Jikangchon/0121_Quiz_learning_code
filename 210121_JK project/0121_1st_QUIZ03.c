#include <stdio.h>
// �ִ밪�� ��������� �Է��� �ް�.
	// 1 - �ִ밪���� ���
	// �ִ밪 �߿� Ȧ������ ���� ���
int main_04(void)
{
	/*
	int input = 0;
	printf("�ִ밪�� �Է��� �ֽʽÿ�. : ");
	scanf_s("%d", &input, sizeof(input)); //����ڷκ��� �Է��� �޾�
										  // input ������ ����.

	//1. 1 - �ִ밪���� ���

	//2. �ִ밪 - 1���� ���

	//3. 1 - �ִ밪 �� Ȧ������ ���� ���
	*/

	int input = 0; int sum = 1;
	printf("�ִ밪�� �Է��� �ֽʽÿ�. : ");
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

	printf("1���� %d������ ���ڵ��� ���� %d�Դϴ�.", input, sum);

	return 0;
}