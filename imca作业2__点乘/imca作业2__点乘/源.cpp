#include <stdio.h>//���
int main()//������д�Ĳ����д�ĵ�ˣ��͸о���˱Ƚϼ򵥣���ûʲôע����
{
	int a,c;
	int arrA[2][3] = { 1,2,3,4,5,6};
	int arrB[2][3] = { 5,6,7,8,9,10 };//��˵ľ��������������Ҫ���
	printf("����A:\n");
	for (a = 0; a < 2; a++)
	{
		for (c = 0; c < 3; c++)
			printf(" %d", arrA[a][c]);
		printf("\n");
	}
	printf("����B:\n");
	for (a = 0; a < 2; a++)
	{
		for (c = 0; c < 3; c++)
			printf(" %d", arrB[a][c]);
		printf("\n");
	}
	int arrC[2][3]={0};
	printf("����A���B�Ľ��:\n");
	for (a = 0; a < 2; a++)
	{
		for (c = 0; c < 3; c++)
		{
			arrC[a][c] = arrA[a][c]*arrB[a][c];//��˾�������������ͬ���������ˣ�Ȼ��õ����������겻�䣬����ѭ��ʱABC��������궼һ��
		}
	}
	for (a = 0; a < 2; a++)
	{
		for (c = 0; c < 3; c++)
			printf(" %d", arrC[a][c]);
		printf("\n");
	}

	return 0;
}