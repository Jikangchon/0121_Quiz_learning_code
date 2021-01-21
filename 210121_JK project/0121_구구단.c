#include <stdio.h>

int main_01(void)
{
		printf("\n-------- ±¸±¸´Ü -------\n");
	for (int x = 1; x <= 9; x++) {

		for (int y = 1; y <= 9; y++) {
			printf("%d x %d = %d\t", y, x, x * y);
		}

		printf("\n");
	}
	return 0;
}