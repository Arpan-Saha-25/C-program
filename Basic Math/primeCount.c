#include <stdio.h>
int main()
{
	int a, b, i;
	printf("\nEnter start value : ");
	scanf("%d",&a);
	printf("\nEnter end value : ");
	scanf("%d",&b);
	printf("\nPrime Numbers between %d and %d : \n", a, b);
while (a < b){
	int flag = 0;
	if(a==1){a++;continue;}

	for(i = 2; i <= a/2; ++i){
		/*if(a==1){	
			flag=1; break; 	
		}*/
		//else 
		if(a!=1) {
			if(a % i == 0){
				flag = 1; break;
	}
}
}	
if (flag == 0)	printf("%d ", a);
++a;
}
printf("\n");
return 0;
}
