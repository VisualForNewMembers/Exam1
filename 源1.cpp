#include<iostream>
using namespace std;
int main()
{
	int arr[15]= { 2,5,8,10,30,50,55,57,62 };
	cout << "ԭ��������Ϊ   " << endl;
	for (int i = 0; i < 9; i++) {
		cout << arr[i] << "  ";
	}
	int b = 0;
	cout << "���û�����һ�����ֵ" << endl;
	cin >> b;
	if (b > arr[8])
	{
		arr[9] = b;
	}
	else {
		for (int i = 0; i < 9; i++)
			if (arr[i] > b)
			{
				for (int j = 9; j >= i; j--) {

					arr[j + 1] = arr[j];
				}
				arr[i] = b;
				break;
			}
	}
	for (int i = 0; i <= 9; i++)
	{
		cout << arr[i] <<"  ";
	}
	return 0;



			



	
		
	

	
	
	
	
}
	





			




	
