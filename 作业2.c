#include <stdio.h>

int main(){
	int A[2][2] = {{3,2},{4,4}};
	int B[2][2] = {{2,6}, {1,8}};
	int C[2][2] = {{0},{0}};
	int D[2][2] = {{0},{0}};
	
	int h; //控制行
	int l; //控制列
	int t; //规律变量
	
	for(h=0;h<2;h++){   //矩阵AxB
		for(l=0;l<2;l++){
			for(t=0;t<2;t++){
				C[h][l] = C[h][l] + A[h][t] * B[t][l];
			}
		}
	}
	
	for(h=0;h<2;h++){  //矩阵A·B
		for(l=0;l<2;l++){
			D[h][l] = A[h][l] * B[h][l];
		}
	}
	
	for(h=0;h<2;h++){  //输出矩阵AxB的结果
		for(l=0;l<2;l++){
			printf("%d\t", C[h][l]);
			if(l==1){
				printf("\n");
			}
		}
	}
	
	printf("\n");
	
	for(h=0;h<2;h++){  //输出矩阵A·B的结果
		for(l=0;l<2;l++){
			printf("%d\t", D[h][l]);
			if(l==1){
				printf("\n");
			}
		}
	}
	
}