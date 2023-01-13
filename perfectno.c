#include<stdio.h>

int main(){

	int num,i;
	printf("Enter the number : ");
	scanf("%d",&num);

	int sum =0;

	for(i=1;i<num;i++){
		if ( num%i == 0){	sum = sum + i;	}
}	
	if (num == sum){	printf("\nPerfect Number !!! ");}
	else printf("\nNot a perfect number.");



return 0;}
