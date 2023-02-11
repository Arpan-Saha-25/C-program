#include<stdio.h>

int main(){
	int row,col;
	char input,sort_type;

printf("\n How you want to sort : row(r) or column(c) sorting ??? ");
scanf("%c",&input);
getchar();
printf("\nHow you want to sort : Ascending(a) or decending(d) ??? ");
scanf("%c",&sort_type);
printf("\nenter the values of rows and columns : ");
scanf("%d%d",&row,&col);

	int mat2[row][col];
	for(int i = 0;i<row;i++){
		for(int j = 0;j<col;j++){
			printf("Enter the value (%d,%d) : ",i,j);
			scanf("%d",&mat2[i][j]);
		}
		printf("\n");
}
	for(int i = 0;i<row;i++){
		for(int j = 0;j<col;j++){
			printf("[%d] ",mat2[i][j]);
		}
		printf("\n");
}


if(input == 'r'|| input == 'R'){

	int j , k ,temp ;
	for(int i =0 ;i<row;i++)
	for(j = 0;j<col;j++ ){
		for(k = j +1;k<col;k++){
			if(mat2[i][j] > mat2[i][k]){
				temp = mat2[i][j] ;
				mat2[i][j] = mat2[i][k] ; 
				mat2[i][k] = temp ;
			}
		}
	}

if(sort_type=='a' || sort_type=='A'){
	printf("\nAscending order by rows : \n");
	for(int i = 0;i<row;i++){
	for(int j = 0;j<col;j++){
		printf("[%d] ",mat2[i][j]);
	}
	printf("\n");
}
}

if(sort_type=='d' || sort_type=='D'){
	printf("\ndecending order by rows : \n");		
	for(int i = 0;i<row;i++){
		for(int j = col-1;j>=0;j--){
			printf("[%d] ",mat2[i][j]);
	}
	printf("\n");
}
}
}
else if(input == 'c' || input == 'C'){
	int j , k ,temp ;
	for(int i =0 ;i<col;i++)
	for(j = 0;j<row;j++ ){
		for(k = j +1;k<row;k++){
			if(mat2[j][i] > mat2[k][i]){
				temp = mat2[j][i] ;
				mat2[j][i] = mat2[k][i] ; 
				mat2[k][i] = temp ;
			}
		}
	}
if(sort_type=='a' || sort_type=='A'){
	printf("\nAscending order by columns : \n");
	for(int i = 0;i<row;i++){
	for(int j = 0;j<col;j++){
		printf("[%d] ",mat2[i][j]);
	}
	printf("\n");
}
}

if(sort_type=='d' || sort_type=='D'){
	printf("\ndecending order by columns : \n");		
	for(int i = row-1;i>=0;i--){
		for(int j = 0;j<col;j++){
			printf("[%d] ",mat2[i][j]);
	}
	printf("\n");	

}
}
}
else printf("WRONG INPUT :-( \n");

return 0;
}