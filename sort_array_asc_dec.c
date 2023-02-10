// wap to sort an array in ascending or decending order . 

#include<stdio.h>

int main(){
	char chose ; 
	printf("\nwhat Order you want \nAscending(a) or Descending(d): ");
	scanf("%c",&chose);

	printf("\nEnter the size of the array : ");
	int size;
	scanf("%d",&size);
	int arr[size];
	for(int i = 0 ; i<size ; i++){
		printf("Enter %d element : ",i+1);
		scanf("%d",&arr[i]);
	}

	printf("\nYour array is : ");
	for(int i = 0 ; i<size;i++){
		printf("%d ",arr[i]);
	}

	int j , k ,temp ;

	for(j = 0;j<size;j++ ){
		for(k = j +1 ; k<size;k++){
			if(arr[j] > arr[k]){
				temp = arr[j] ;
				arr[j] = arr[k] ; 
				arr[k] = temp ;
			}
		}
	}

if(chose == 'a' || chose == 'A'){
	printf("\n\nYour Ascending sorted array is : ");
	for(int i = 0 ; i<size;i++){
		printf("%d ",arr[i]);
	}}
if(chose == 'd' || chose == 'D'){
	printf("\n\nYour descending sorted array is : ");
	for(int i = size-1 ; i>0;i--){
		printf("%d ",arr[i]);
	}
}
return 0;
}