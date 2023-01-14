#include<stdio.h>

void main(){
	//knowing rows and columns 
	int row1 , col1,row2 , col2;
	printf("Enter the row of matrix A : ");
	scanf("%d",&row1);
	printf("Enter the col of matrix A : ");
	scanf("%d",&col1);
	printf("Enter the row of matrix B : ");
	printf("%d\n",col1);
	row2=col1;
	printf("Enter the col of matrix B : ");
	scanf("%d",&col2);
	
	//getting matrixA elements
	printf("\nMATRIX A :\n");
	int mat1[row1][col1];
	for(int i = 1 ; i<=row1 ; i++)
		for(int j =1 ; j<=col1 ; j++){
			printf("enter the value of [%d,%d] : ",i,j);
			scanf("%d",&mat1[i][j]);
		}
	
	
	//getting matrix B elements
	printf("\nMATRIX B :\n");
	int mat2[row2][col2];
	for(int i = 1 ; i<=row2 ; i++)
		for(int j =1 ; j<=col2 ; j++){
			printf("enter the value of [%d,%d] : ",i,j);
			scanf("%d",&mat2[i][j]);
		}
	

	//multiplication of the matrix 
	int result[row1][col2];
	for (int i =1 ; i<=row1;i++)
		for(int j=1;j<=col2;j++){
			int sum =0;
			for(int k =1;k<=col1;k++){
				sum = sum + mat1[i][k]*mat2[k][j];
				//printf("%d\t",sum);
			}
			//printf("\n");
			result[i][j] = sum ; 
		}
	
	//printing mat1
	printf("\nMATRIX A : \n");
	for (int i = 1; i<=row1;i++){
		for(int j = 1 ; j<=col1 ; j++){
			printf("%d\t",mat1[i][j]);
		}
	printf("\n");

	}
	//printing mat2
	printf("\nMATRIX B :\n");
	for (int i = 1; i<=col1;i++){
		for(int j = 1 ;j<=col2 ; j++){
			printf("%d\t",mat2[i][j]);
		}
	printf("\n");

	}

	
	//printing the result maatrix 
	printf("Result matrix : \n");
	for (int i = 1; i<=row1;i++){
		for(int j = 1 ; j<=col2 ; j++){
			printf("%d\t",result[i][j]);
		}
	printf("\n");

	}



}	
