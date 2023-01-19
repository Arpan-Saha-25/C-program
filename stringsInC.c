#include<stdio.h>
#include<string.h>
int main(){

	char ch[] = {'a','r','p','a','n','\0'};
	char name[] = "Arpan";
	char naam[10];
	printf("Enter your name : ");
	scanf("%s",naam);

	printf("%s",ch);
	printf("\n");

	printf("%s",name);
	printf("\n");
	printf("%s",naam);
	printf("\n");


	return 0;
	}