#include<stdio.h>

int main() {

	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int b[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int c[3][3] = { 0 };
	int i, j, k;

	printf("����aΪ��");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("    %d", a[i][j]);
		}
	}
	printf("\n");
	printf("����bΪ��");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("    %d", b[i][j]);
		}
	}

	printf("\n");
    printf("����a * bΪ");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++) {
			c[i][j] = a[i][j] * b[i][j];
		}
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("    %d", c[i][j]);
		}
	}








	return 0;
}