#include <stdio.h>

int main(void)
{
	int floor = 0;
	char command = 0;

	// 무한 반복 기능
	while (1) {
		     printf("\n출력할 층 수를 입력해 주세요. : ");
			scanf_s("%d", &floor, sizeof(floor));

			// 1: 층수는 5층 이상
			if (floor < 5) {
				printf("\n층수는 5층 이상이어야 합니다.");
				continue;
			}
			// 2: 층수는 홀수여야한다.


			// 피라미드 그리기
			for (int i = 1; i <= floor; i++) {
				// 1 - 5
				for (int j = 1; j <= i; j++) {
					printf("*");
				}
				printf("\n");
			}
			// 삼각형2
			// 5층을 넣는다
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
			 
			 5층건물 
			 i = 1 -> 공백은 몇개? 4 
			 i = 2 -> 3개
			 i = 3 -> 2개 
			 i = 2 -> 1개 
			 i = 5 -> 0개 
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

			// 피라미드 만들기
			for (int i = 1; i <= floor; i++) {

				for (int k = 1; i <= floor - 1; i++) {
					printf(" ");
				}
				for (int k = 0; k < i * 2 + 1; k++) {
					printf("*");
				}
			}
			printf("\n");
			printf("피라미드를 다시 그리시겠습니까? (y / n)");
			scanf_s(" %c", &command, sizeof(command));

			if(command == 'n') break;

	}
	return 0;
}