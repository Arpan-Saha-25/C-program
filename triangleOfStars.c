#include<stdio.h>

int main(){
	int num;
	char ch = ' ';
	printf("enter the number of lines : " );
	scanf("%d",&num);
	int space = num;

	for (int i = 1 ; i<= num; i=i+2){
		for( int j =space; j>=0 ; j--){
			printf("%d",j);
			printf("%c",ch);
		}
		printf("\n");
	}
	
	
	return 0;
}
