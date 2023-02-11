#include<stdio.h>

// wap to print all the odd number in the given range 

int main(){
	int upper ,lower ; 
	printf("Enter the lower limit and upper limit respectively :  ");
	scanf("%d%d",&lower,&upper);

if(lower<upper){
	printf("All odd number the given range \n");
	for (int i = lower ; i<=upper ;i++){
		if (i%2 != 0){ printf("%d\n",i); }
	}
}


else
	printf("Wrong input.Please try again.");

return 0;
}