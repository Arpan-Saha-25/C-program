// sort_arr.c
#include <stdio.h>

int main() {


  int arr[]={100,12,23,34,21,45,56,44};
  int size = 8;
  int temp;
  for(int i = 0;i<size;i++)
    for(int j = i+1;i<size;j++){
        if(arr[i]>arr[j]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

   for(int i = 0; i<size ;i++){
      for(int j = 0; j<size ;j++)
      printf("\ni=%d     j=%d",i,j);
   }
   
    return 0;
}