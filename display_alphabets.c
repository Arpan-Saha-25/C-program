#include<stdio.h>

//C Program to Display Characters from A to Z Using Loop

int main()
{
	int input;
	printf("\n Want to see english aphabets?? \t type Y or N : ");
	scanf("%c",&input);

	if(input == 'Y' || input == 'y'){
	for(int i = 65;i<=90;i++){
		printf("\n%c",i);
	}
}

printf("\nThank you !!!");
	return 0;
}