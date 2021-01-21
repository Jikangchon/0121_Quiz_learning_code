#include <stdio.h>

int main_02(void)
{
	
	for (int i = 1; i <= 6; i++) // 1번 주사위
		for (int j = 1; j <= 6; j++) { // 2번 주사위
			
			if (i + j != 6) continue;
			printf("[%d, %d] = %d\n", i, j, i + j);
		}
	return 0;
}