#include <stdio.h>

int main(void)
{
	int floor = 0;
	char command = 0;

	// ���� �ݺ� ���
	while (1) {
		     printf("\n����� �� ���� �Է��� �ּ���. : ");
			scanf_s("%d", &floor, sizeof(floor));

			// 1: ������ 5�� �̻�
			if (floor < 5) {
				printf("\n������ 5�� �̻��̾�� �մϴ�.");
				continue;
			}
			// 2: ������ Ȧ�������Ѵ�.


			// �Ƕ�̵� �׸���
			for (int i = 1; i <= floor; i++) {
				// 1 - 5
				for (int j = 1; j <= i; j++) {
					printf("*");
				}
				printf("\n");
			}
			// �ﰢ��2
			// 5���� �ִ´�
			/*
			 
			 * 
			 **
			 ***
			 ****
			 ***** 

			 SSSS*
			 SSS**
			 SS***
			 S****
			 *****
			 
			 5���ǹ� 
			 i = 1 -> ������ �? 4 
			 i = 2 -> 3��
			 i = 3 -> 2�� 
			 i = 2 -> 1�� 
			 i = 5 -> 0�� 
			*/

			for (int i = 1; i < floor; i++) {
				for (int k = 1; k <= floor - i; k++) {
					printf(" ");
				}
				for (int j = 1; j <= i; j++) {
					printf("*");
				}
				printf("\n");
			}

			// �Ƕ�̵� �����
			for (int i = 1; i <= floor; i++) {

				for (int k = 1; i <= floor - 1; i++) {
					printf(" ");
				}
				for (int k = 0; k < i * 2 + 1; k++) {
					printf("*");
				}
			}
			printf("\n");
			printf("�Ƕ�̵带 �ٽ� �׸��ðڽ��ϱ�? (y / n)");
			scanf_s(" %c", &command, sizeof(command));

			if(command == 'n') break;

	}
	return 0;
}