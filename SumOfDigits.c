#include<stdio.h>
int main()
{
int n,sum=0;
printf("Enter a number : ");
scanf("%d",&n);
while (n!=0){
	int r = n%10;
	sum = sum +r;
	n = (n-r)/10;}

printf("The sum of the digits of the number is %d.\n",sum);
return 0;}		
