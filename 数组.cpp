#include<iostream>
using namespace std;
int main()
{
	int arr[15] = { 1,3,12,14,25,27,34,37,44,55 };//��������
	cout << "ԭ����Ϊ:";
	for (int i = 0;i <=9;i++)
	{
		cout <<  arr[i] << " ";
	}
	cout << endl;
	int b = 0;//�������ı���
	cout << "������һ��ֵ��" << endl;
	cin >> b;
	if (b > arr[9])
	{
		arr[10]=b;
	}
	else {
		for(int i = 0;i<=10;i++)
			if (arr[i] > b)
			{
				for (int j = 10;j >= i;j--)
				{
					arr[j + 1] = arr[j];
				}
				arr[i] = b;
				break;
			}
	}
	for (int i = 0;i <=10;i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}