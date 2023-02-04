// wap to find powers of a given number bu using recursion 


#include<stdio.h>

int pow_cal(int base, int expo);		//function initialisation

int main(){					//main function
	int base , expo ;
	printf("Enter the base value : ");	//input for base
	scanf("%d",&base);

		printf("Enter the exponent value : ");	//input for exponent 
	scanf("%d",&expo);

	printf("Power is : %d",pow_cal(base,expo));	//print power

	printf("\n");

	return 0;
} 


int pow_cal(int base , int expo){		// function declaration to calculate power
	int power = 1 ;
	for( int i = 1; i<= expo ; i++){
		power = power * base;}
	return power ;
}
