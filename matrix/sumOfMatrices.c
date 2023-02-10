#include<stdio.h>



void main(){
	int row,col;
	printf("Enter the number of rows : ");
	scanf("%d",&row);
	printf("Enter the number of cols : ");
	scanf("%d",&col);
	
	int arr[row][col];
	for(int i = 0 ; i<row ; i++){
		for(int j = 0 ; j<col ; j++){
			printf("enter the value of [%d,%d] : ",i+1,j+1);
	scanf("%d",&arr[i][j]);}}
	
	printf("\n Next Matrix \n"); 
	
	int arr2[row][col];
	for(int i = 0 ; i<row ; i++){
		for(int j = 0 ; j<col ; j++){
			printf("enter the value of [%d,%d] : ",i+1,j+1);
	scanf("%d",&arr2[i][j]);}}
	
	for(int i = 0 ; i<row ; i++){
		for(int j = 0 ; j<col ; j++){
			
			printf("%d ",arr[i][j]+arr2[i][j]);
		}
		printf("\n");
	}
}
