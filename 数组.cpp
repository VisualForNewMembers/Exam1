#include<stdio.h>

int main() 
{

	int i, j, insetr_num, temp1, temp2;     //����temp1��temp2Ϊ�ݴ�ı���
	int a[11] = { 10,20,30,40,50,60,70,80,90,100};
	for (i = 0; i < 11; i++) 
	{

		printf("   %d", a[i]);
	}                               //��ӡ����
	printf("\n������һ����");
	scanf_s("%d", &insetr_num);
	

	if (insetr_num > a[9])    
	{
		a[10] = insetr_num;
	}
	else 
	{
		for (i = 0; i < 10; i++) 
		{

			if (a[i] > insetr_num)    //�ҵ������е�һ�������������ֵ�Ԫ��
			{
				temp1 = a[i];
				a[i] = insetr_num;
				for (j = i + 1; j < 11; j++) 
				{
					temp2 = a[j];
					a[j] = temp1; 
					temp1 = temp2;


				}
				break;
			}

		}
	}

	for(i = 0; i < 11; i++)
			printf("%d,", a[i]);
	







	return 0;

}