#include <stdio.h>
#include <math.h>
int main()
{

    int limit ,prime,count=0,notcount = 0;
    printf("Enter a limit : ");
    scanf("%d",&limit);             // takes the range

    for(int num = 2 ; num <= limit ; num++) {       // num =2 bcz 1 is factor of
        int prime = 0;                              // all the numbers.
        for(int i=2 ; i < num  ; i++) {
            if(num%i==0) {
                prime++;
                break;
            }
        }
        if(prime == 0) count++;                 // counting primes
        else notcount++;
        
    }
    printf("\nThe total prime numbers b/w 1 to %d is %d.\n",limit,count);
    printf("The total non-prime numbers b/w 1 to %d is %d.\n",limit,notcount+1);
    //notcount + 1 ==>> we haven't counted 1.That's why 1 is added .
    return 0;
}
