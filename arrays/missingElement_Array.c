#include<stdio.h>

void missingnumber(int n){
	int arr[n-1],sum = 0, sum2 =0;

	sum = n*(n+1)/2;

	for(int index = 1 ; index < n ;index++){
		scanf("%d",&arr[index]);
		sum2 =sum2 + arr[index];
	}

	printf("%d",sum-sum2) ;
}

int main(){
	int n; 
	scanf("%d",&n);
	missingnumber(n);
	return 0 ; 
}