#include <stdio.h>
#include<stdbool.h>
#include<math.h>
int main() {
    
    int number ,i; 
    bool prime=1 ;
    printf("Enter the number : ");
    scanf("%d",&number);
    
    if(number<=1){
        printf("Neither prime nor not prime.");
        return 0;
    }
    for( i =2 ;i<=sqrt(number) ; i++){ 
        printf("Value of i = %d \n",i);
        if(number%i==0){    prime = 0; break; }   
    }
    if( prime == 1 ){
        printf("\nIt is a prime number . ");
    }
    else {
        printf("\nIt is not a prime number.");
    }

    return 0;
}