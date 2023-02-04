#include<stdio.h>

int main(){
	int length;
	printf("Enter the length of the word : ");
	scanf("%d",&length);
	char arr[length],arr2[length];
	int i,j,k=1,flag=1;
	printf("enter the word : ");
	for(i = 0;i<=length;i++){ scanf("%c",&arr[i]);  	}

	for (j=length ; j>0 ; j--){	
arr2[k]=arr[j];
k++;}

for(int l=1;l<=length;l++){
    printf("val1==%c \t",arr[l]);
    printf("val2==%c \n",arr2[l]);
    if(arr[l]==arr2[l])
    flag=0;
    else
    {
        flag=1;
        break;
    }
}
if(flag==0) printf("\nPalindrome \n");
else printf("\nNOtttttt Pal \n");
return 0;
}
