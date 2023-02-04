#include<stdio.h>
#include<string.h>

//		Compare two equal length words are equal or not !!!!!!!! ♥♥

void main(){
	char str1[26],str2[26];						//getting strings 
	printf("Enter your word-1 :");
	scanf("%s",str1);
	printf("Enter your word-2 :");
	scanf("%s",str2);

	int i =0, count = 0 ;
	while(str1[i]!='\0'){
		//changing Capital letters to small letters 
		if(str1[i]>=65&&str1[i]<=90) str1[i]=str1[i]+32;
		if(str2[i]>=65&&str2[i]<=90) str2[i]=str2[i]+32;

		//if not equal then breaks the loop.
		if(str1[i]!=str2[i]){
			count = 0;
			break;
		}

		//if equal then increases the value of count 
		if( str1[i]==str2[i])
			count++;
		i++;
	}

	if(count > 0) printf("EQUAL");  //count is positive then equal
	else printf("NOT EQUAL");		//else not equal
	return;
}