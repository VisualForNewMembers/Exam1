#include<iostream>
using namespace std;
int main()
{
	int a[2][3] = { 1,3,5,7,9,11};//�������A
	cout << "����AΪ��" << endl;
	for (int i = 0;i < 2;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			cout << a[i][j] << "  ";
		}
		cout << endl;
	}
	cout << "����BΪ��" << endl;
	int b[2][3] = { 2,4,6,8,10,12};//�������B
	for (int k = 0;k < 2;k++)
	{
		for (int l = 0;l < 3;l++)
		{
			cout << b[k][l] << "  ";
		}
		cout << endl;
	}
	cout << "A��B�Ľ��Ϊ��" << endl;
	for (int i = 0;i < 2;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			cout << a[i][j] * b[i][j] << "  ";//����
		}
		cout << endl;
	}
	int c[3][2];
	for (int i = 0;i < 2;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			c[j][i] = b[i][j];
		}
	}
	cout << "����Bת�ú�Ϊ��" << endl;
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 2;j++)
		{
			cout << c[i][j] << "  ";//ת�þ���B
		}
		cout << endl;
	}
	int d[3][3];
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			d[i][j] = 0;//��ǰ��d[i][j]��ʼ��
			for(int k = 1;k<2;k++)
			{
				d[i][j] += c[i][k] * a[k][j];//�ڶ������������һ�������������������
			}
		}
	}
	cout << "AxB�Ľ��Ϊ��" << endl;
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			cout << d[i][j] << "  ";
		}
		cout << endl;
	}
	return 0;
}