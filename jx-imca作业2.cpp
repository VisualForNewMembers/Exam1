#include<iostream>
using namespace std;
int chacheng(int a,int b);  		//��˺���   				
int diancheng(int c,int d);			//��˺��� 
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};				//���� ��Ϊȫ�ֱ��� 
	int b[3][3]={{11,12,13},{14,15,16},{17,18,19}};		// ͬ�� 
int main(void)									//�������� 
{
	int i,j;
	cout<<"int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};"<<"\n";            //ֱ��������� 
	cout<<"int b[3][3]={{11,12,13},{14,15,16},{17,18,19}}"<<"\n";     
	cout<<"��˽��Ϊ"<<diancheng(i,j)<<"\n";                         //���ú��� 
	cout<<"��˽��Ϊ"<<chacheng(i,j)<<"\n";
	return 0;	
 }
 //��˺��� 
 int diancheng(int i,int j)
 {
 	int sum,m;
 	for(i=0;i<3;i++)
 		for(j=0;j<3;j++)
        {
		m=a[i][j]*b[i][j];
        sum=sum+m;
    	}
    return(sum);
  }
 //��˺��� 
  int chacheng(int i,int j)
  {
  	int sum,m,g;
 	for(i=0;i<3;i++)
 		for(j=0;j<3;j++)
 		    for(g=0;g<3;g++)
        {
		m=a[i][j]*b[i][g];
        sum=sum+m;
    	}
    return(sum);
	  }  
