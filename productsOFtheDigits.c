//wap to find the product of the digits of the given integer .
#include<stdio.h>

int main(){

int n,prod =1 ;
printf("Enter the number :");
scanf("%d",&n);

while(n!=0){
	int r = n%10;
	prod = prod*r ;
	n = (n-r)/10; }
printf("The product of the digits of the number is %d \n",prod);
return 0;}

