#include<stdio.h>
#include<stdlib.h>

void main(){
	int size;
	printf("Enter the number of elements : ");
	scanf("%d",&size);

	int *data = (int *)calloc(size,sizeof(int));
	
	if(data == NULL) {
		printf("Empty / invalid input");
		return;
	}

	//entering the values 

	for(int i = 0 ; i < size ; i++){
		printf("Enter the value of %dth elements : ",i+1);
		scanf("%d",data + i);
	}

	//comparing the values 
	for(int i = 0 ; i<size ; i++){
	if(*data < *(data + i)) 
		*data = *(data+i);
	}

	printf("the largest value is %d \n",*data);

	free(data);
	return;
}
