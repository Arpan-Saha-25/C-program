#include<stdio.h>
int main()
{
float n,i;
printf("Enter a number : ");
scanf("%f",&n);
float sum =0;
for (i=1;i<=n;i++){
	sum = sum + 1/i ;
	}
printf("Sum of inverse of an integers : %.2f",sum);
return 0;
}
