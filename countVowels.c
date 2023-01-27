// wap to count the number of the vowels present in a string 

#include<stdio.h>
#define LIMIT 1000
void main(){

	char str[1000]; //= "This is the c programming class";
	printf("Enter the sentence : ");
	fgets(str,sizeof(str),stdin);

	int vowel=0,conso=0,i=0;
	while(str[i]!='\0'){
		if( str[i] == 'A' || str[i] == 'E'|| str[i] == 'I' || str[i] == 'O' || str[i] == 'U'|| str[i] == 'a' 
		|| str[i] == 'e' || str[i] == 'i'|| str[i] == 'o' || str[i] == 'u') {
			vowel++;
		}
		else
		{
			if(str[i] !=' '||str[i]!='.')
				conso++;
		}
	i++;
	}
	
	printf("The number of vowels are %d and consonants are %d. \n",vowel,conso);
	
	return ; 
}
