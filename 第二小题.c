#include <stdio.h>
int main()
{
	int arr1[3][3] = { {1,2,3},{4,5,6},{7,8,9 } };
	int arr2[3][3] = { {7,8,9},{10,11,12},{13,14,15} };
	//A��B
	int arr3[3][3] = { {0,0,0}, {0, 0, 0}, { 0,0,0 } };
	int b = 0;
	printf("A��BΪ���£�\n");
	for (b; b <= 2; b++)
	{
		int a = 0;
		for (a; a <= 2; a++)
		{
			arr3[b][a] = arr1[b][a] * arr2[b][a];
			printf("%-3d  ", arr3[b][a]);
			if (a == 2)
			{
				printf("\n");
			}
		}
	}
	
	//A x B 
	int arr4[3][3] = { {0,0,0}, {0, 0, 0}, { 0,0,0 } };
	int e = 0;//e���� f����
	int f = 0;
	printf("A x BΪ���£�\n");
	for (e; e <= 2; e++)
	{
		int f = 0;
		for (f; f <= 2; f++)
		{
			arr4[e][f] = arr1[e][0] * arr2[0][f] + arr1[e][1] * arr2[1][f] + arr1[e][2] * arr2[2][f];
			printf("%-3d  ", arr4[e][f]);
			if (f == 2)
			{
				printf("\n");
			}
		}
		
	}

	return 0;
}