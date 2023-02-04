#include<stdio.h>
int main(){

int term,r;
printf("Enter a nth term :");
scanf("%d",&term);
int sum=0;
for (int i=1;i<=term;i++){
	if (i%2==0) {sum = sum - i;}
	else {
		sum = sum + i; }	

	}
printf("The sum of the series is %d \n",sum);
return 0;
}

