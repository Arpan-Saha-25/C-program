// print the values of an array using pointers 

#include<stdio.h>

void main(){
	int size;
	printf("Enter the size of the array :");
	scanf("%d",&size);
	int arr2[size];

	for(int j = 0 ; j<size ; j++){
		printf("\nEnter the value [%d] : " , j+1);
		scanf("%d",&arr2[j]);
	}

	int *ptr = &arr2[0];

	printf("Printing values of array through pointers:\n");

	for(int i = 0 ; i<size ;i++){
		printf("%d  ",*(ptr+i));
	}
	
	printf("\n");


	return;
}

