#include<iostream>
using namespace std;
int main(void)
{
	int a[10]={11,22,33,44,55,66,77,88,99};       //���� 
	int i,j,t;
	cout<<"����������ʾ"<<"\n"; 
	for(i=0;i<=8;i++)
		cout<<a[i]<<"\n"; 
	cout<<"����һ����"<<"\n";
	cin>>a[9];                          //����������Ž����� 
 	for(i=0;i<=9;i++)					//��˳ϵ�������� 
	    for(j=i+1;j<=9;j++)
	    
	    	if(a[i]>a[j])
	    	{
				t=a[i];
	    		a[i]=a[j];
	    		a[j]=t;
			}
	
	cout<<"�������������"<<"\n";
	for(i=0;i<=9;i++)                   //������� 
	cout<<a[i]<<"\n"; 
	    	
	return 0; 
	
}
