// print the tranpose of the matrix given by the user 

#include<stdio.h>



void main(){
	int row,col;
	printf("Enter the no. of rows : ");
	scanf("%d",&row);

	printf("Enter the no. of columns : ");
	scanf("%d",&col);
	
	int arr[row][col];
	for ( int i = 0 ; i <row ; i++ ) {
		for(int j = 0; j<col ;j++){
			printf("Enter the value of [%d,%d] : ",i+1,j+1);
			scanf("%d",&arr[i][j]);


}
}
	int arr2[col][row];
	for (int i=0 ; i<col ; i++){
		for(int j=0 ; j< row 	; j++ ){
			arr2[i][j] = arr[j][i];
			printf("%d ",arr2[i][j]); 
}
	printf("\n");
}
/*	for (int  i = 0 ; i< row ; i++)
		for(int j=0 ; j< col ; j++)
			printf("%d",arr2[i][j]);
*/
 } 
