// reversing a given number 
#include<stdio.h>
int main()
	{
	int n,r;
	printf("Enter a number : ");
	scanf("%d",&n);
printf("reverse of this number:");	
while(n!=0){
	r = n%10;
	printf("%d",r);
	n = (n-r)/10;}
printf("\n");
return 0;}
