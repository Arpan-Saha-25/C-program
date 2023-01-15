#include<stdio.h>

// count the number of digits in an integer 

int main(){
	long long int number;
	long long int count =1,rem ;
	printf("Enter a number : ");
	scanf("%lld",&number);

	long long int temp = number ;

	while(temp>10){
		rem = temp % 10 ; 
		temp = (temp - rem)/10 ;
		count++;
	}



printf("\nThe no. of digits of %lld are %lld . ",number,count);


return 0;
}