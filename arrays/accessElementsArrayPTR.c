// c program for access using pointers 

#include<stdio.h>
void main(){
int *ptr,len;
printf("Enter the length of the array : ");
scanf("%d",&len);
int arr[len];
printf("ENter the elements :\n");

for(int i = 1 ; i<=len;i++){
	scanf("%d",&arr[i]);
}
printf("\n");
for(int i = 1 ; i<=len;i++){
	printf("%d  ",arr[i]);
}

printf("\n Enter the index you want to access: ");
int index;
scanf("%d",&index);
ptr = arr;
printf("%d\n",*(ptr+index));
return;
}
