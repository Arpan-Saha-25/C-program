#include <stdio.h>
#include<stdbool.h>
#include<math.h>
int main() {
    
    int number ,i,lower , upper ,count=0; 
    bool prime=1 ;
    printf("Enter the lower number : ");
    scanf("%d",&lower);
    printf("Enter the upper number : ");
    scanf("%d",&upper);
    
  
    for(number = lower ; number <= upper ; number++){
        if(number==1){continue ; }
        for( i =2 ;i<=sqrt(number) ; i++){ 
            if(number%i==0){    prime = 0; break; }   
            else {  prime =1;    }
    }
    
    if( prime == 1 ){
        //printf("\nIt is a prime number . ");    //for printing "prime" for each number
	printf("%d  ",number);
        count++;
    }
    /*else {
        printf("\nIt is not a prime number.");  //for printing "not prime" for each number
    }*/
}
    
    
    printf("\n\nTotal prime number are %d.",count);
    return 0;
}