#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main(){
	char str1[100],str2[100];
	bool result = 0;

	printf("Enter the first word :");
	scanf("%s",&str1);

	printf("Enter the second word :");
	scanf("%s",&str2);

	char *ptr = str1;
	char *ptr2 =str2;

	for(int i = 0;i <= sizeof(str1);i++){
		if(toupper(*(ptr+i)) == toupper(*(ptr2+i))){ 
			result = 1; 
		}
		else
			break;
	}

	if(result == 1) printf("\nEQUAL"); 
	else 
		{
			printf("\nUNEQUAL");  
		if(strlen(str1) > strlen(str2)) {printf("\nBut first word is longer.");}
		else if(strlen(str1) < strlen(str2)){ printf("\nBut second word is longer.");}
	}
	


	return 0;
}