#include<iostream>
using namespace std;

int main()
{
	int	b1[3][3] = { 0 };
	int b2[3][3] = { 0 };
	int b3[3][3] = { 0 };
	cout<<"�����һ������\n";
	for (int i = 0;i <3;i++)
	{
		for (int j = 0;j <3; j++)
		{
			cin>>b1[i][j];
		}
		cout<<"\n";
	}
	cout<<"�ڶ�������Ϊ\n";
	for (int i = 0;i < 3; i++)
	{
        for (int j = 0;j <3;j++)
		{
			cin>>b2[i][j];
		}
		cout<<"\n";  
	}
	cout<<"�����˵Ľ����\n";
	for  (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<" "<<b1[i][j ] *b2[i][j];
		}
		cout<<"\n";
	}
}
