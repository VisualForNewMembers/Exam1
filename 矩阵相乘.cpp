#include<stdio.h>

int main() {

	int a[2][4], b[4][3], c[2][3];
	int i, j, k, sum;

	printf("������һ��2x4�ľ���\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++) {
			scanf_s("%d", &a[i][j]);

		}   
	}   //�����һ������
	printf("������һ��4x3�ľ���\n");

	for (i= 0; i < 4; i++) {
		for (j= 0; j < 3; j ++ ) {
			scanf_s("%d", &b[i][j]);

		}
	}   //����ڶ�������

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			sum = 0;
			for (k = 0; k < 4; k++) {
				sum += a[i][k] * b[k][j];
			}
			c[i][j] = sum;
		}
	}
	printf("�õ�һ��2x3�ľ���Ϊ\n");

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%5d", c[i][j]);
			printf("\n");

		}
	}

	return 0;
}