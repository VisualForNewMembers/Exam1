#include<stdio.h>;
#include<iostream>
#include "Դ.h"
using namespace std;
int main(void)
{
	int arr1[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int arr2[3][3] = { {2,3,4},{5,6,7},{8,9,1} };
	int arr3[3][3] = { {0,0,0},{0,0,0},{0,0,0} };
	int arr4[3][3] = { {0,0,0},{0,0,0},{0,0,0} };
	int b = 0;
	int i = 0;
	int j = 0;
	cout << "����AΪ" << arr1 << endl;
	cout << "����BΪ" << arr2 << endl;
	int a = 0;
 for (a; a < 3; a++) {
		int b = 0;
		for (b; b < 3; b++) {
			arr3[a][b] = arr1[a][b] * arr2[a][b];

		}
	};
for (i; i < 3; i++) {
		for (j; j < 3; j++)
			arr4[i][j] = arr1[i][0] * arr2[0][j] + arr1[i][1] * arr2[j][1] + arr1[i][2] * arr2[j][2];
	}
cout << "����A��B�Ľ��Ϊ " << arr3 << endl;
cout << "����A��B�Ľ��Ϊ " << arr4 << endl;
	
	return 0;
}







