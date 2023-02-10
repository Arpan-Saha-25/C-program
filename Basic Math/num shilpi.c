#include <stdio.h>  
int main()  
{  
   long long int n;  // variable declaration  
   long long int count=0;   // variable declaration  
   printf("Enter a number");  
   scanf("%lld",&n);  
   printf("%lld",n);
   while(n!=0)  
   {  
       n=n/10;  
       count++;  
   }  
     
   //printf("\nThe number of digits in an integer is : %lld",count);  
    printf("\nThe no. of digits of %lld are %lld . ",n,count);
    return 0;  
} 