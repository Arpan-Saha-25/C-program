#include<stdio.h>
int main(){

int d,r;
printf("Enter a number :");
scanf("%d",&d);
int sum=0;
for (int i=1;i<=d;i++){
	if (i%2==0) {sum = sum - i;}
	else {
		sum = sum + i; }	

	}
printf("The sum of the series is %d \n",sum);
return 0;
}

