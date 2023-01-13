#include<stdio.h>
#include<math.h>

int btd(long long int a );

int main(){
	long long int num ;
	printf("Enter binary digits : ");
	scanf("%lld",&num);
	
	int n=btd(num);
	printf("val::%d",n);

	return 0;
}

int btd(long long int a){
	int decimal=0, temp = a,count= -1,arr[500],i=0;	
	while(temp>0){
		arr[i++]=temp%10;
		temp = temp / 10 ;
		count++;	}
    printf("%d\n",count);
	for(int j = i-1;j>=0;j--){
		decimal=decimal+(arr[j]*pow(2,count--));
		printf("arr[%d] = %d \n",j,arr[j]);
 	
}
    printf("Decimal : %d \n",decimal);
	return decimal;
}

