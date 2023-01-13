#include<stdio.h>
int main(){
	int j,i,n,flag=0,p=0;
	printf("Enter the number :");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		for (j=1;j<=i;j++){
			if(i%j==0){flag++;} 
			
if (flag==2){p++;}
}
}



printf("total prime no.s are %d",p);


return 0;}
