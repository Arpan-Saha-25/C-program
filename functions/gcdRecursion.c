#include<stdio.h>

//gcd of two numbers 

int gcd(int a , int b);


int main(){
	int num1,num2;
	printf("Enter the first number : ");
	scanf("%d",&num1);
	printf("Enter the second number : ");
	scanf("%d",&num2);

	printf("The gcd of %d and %d is %d\n",num1,num2, gcd(num1,num2));
	
	return 0;
}

int gcd(int a , int b){
	if(a==b) return a;
	if(a%b==0) return b;
	if(b%a == 0) return a; 

	if(a>b){	
		gcd(a%b,b);
		}
	else {
		gcd(a,b%a);
	}

}
