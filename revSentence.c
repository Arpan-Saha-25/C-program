// wap to reverse a sentence given by the user using recursion 

#include<stdio.h>

int reverse();

int main(){
	printf("Enter your sentence : ");
	reverse();
	printf("\n");
	return 0;	
}

int reverse(){
	char ch;
	scanf("%c",&ch)	;
	if(ch == '\n'){printf("Reverse of the sentence is ");}
	if(ch != '\n'){reverse();printf("%c",ch);}
	return 0; 
}
