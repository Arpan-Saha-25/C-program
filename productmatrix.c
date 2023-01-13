#include<stdio.h>

void getMatrix(int arr[][int col]){
	for(int i =1 ; i <= row ; i++)
		for(int j =1 ; j<= col ;j++){
			printf("%d",arr[i][j]);}

void main(){
	int row1,col1,row2,col2;
	printf("Enter the row of the matrix A : ");
	scanf("%d",&row1);
	printf("Enter the column of the matrix A : ");
	scanf("%d",&col1);
	printf("Enter the row of the matrix B : ");
	printf("%d\n",col1);
	row2 = col1;
	printf("Enter the column of the matrix B : ");
	scanf("%d",&col2);

	//getting matrix A
	int arr1[row1][col1];

	for(int i =1 ; i<=row1 ; i++){
		for (int j =1 ; j<=col1 ;j++){
			printf("enter the value of [%d][%d] : ",i,j);
			scanf("%d",&arr1[i][j]);
		
		}
	}

	//getting matrix B
	int arr2[col1][col2];

	for(int i =1 ; i<=row1 ; i++){
		for (int j =1 ; j<=col1 ;j++){
			printf("enter the value of [%d][%d] : ",i,j);
			scanf("%d",&arr2[i][j]);
		
		}
	//printing matrices 
	getMatrix[row1][col1];
	getMatrix[col1][row2];
	
	//Multiplication of these two matrices 

	int sum[row1][col2];
	int add = 0;
	for ( int i =1 ; i<=row1 ; i++)
		for (int j =1 ;j<=col2; j++){
			add = add + arr1[i][j]+arr2[j][i];}
		


}
