#include<iostream>
using namespace std;
int chacheng(int a,int b);  		//��˺���   				
int diancheng(int c,int d);			//��˺��� 
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};				//���� ��Ϊȫ�ֱ��� 
	int b[3][3]={{11,12,13},{14,15,16},{17,18,19}};		// ͬ�� 
	int i,j;
int main(void)									//�������� 
{
	cout<<"int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};"<<"\n";            //ֱ��������� 
	cout<<"int b[3][3]={{11,12,13},{14,15,16},{17,18,19}}"<<"\n";     
	cout<<"��˽��Ϊ"<<"\n";                         //���ú��� 
	diancheng(i,j);	
	cout<<"\n"<<"��˽��Ϊ"<<"\n";
	chacheng(i,j);
	return 0;	
 }
 //��˺��� 
 int diancheng(int i,int j)
 {
 	int g[3][3];
 	for(i=0;i<3;i++)
 		for(j=0;j<3;j++)
        {
		g[i][j]=a[i][j]*b[i][j];
    	}
         	for(i=0;i<3;i++)
 				for(j=0;j<3;j++)
 				cout<<g[i][j]<<" ";
  }
 //��˺��� 
  int chacheng(int i,int j)
  {
  	int z[3][3],f[3][3],g;
 	for(i=0;i<3;i++)
 		for(j=0;j<3;j++)
 		    for(g=0;g<3;g++)
        {
		f[i][j]=a[i][j]*b[i][g];
        z[i][j]+=f[i][j];
    	}
     	for(i=0;i<3;i++)
 			for(j=0;j<3;j++)
 			cout<<z[i][j]<<" ";
	  }  
