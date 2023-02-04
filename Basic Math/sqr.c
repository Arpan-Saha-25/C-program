#include<stdio.h>
#include<math.h>

int sqroot(int x){
    return sqrt(x);
}

int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    
    printf("square root : %d",sqroot(n));
return 0 ; }
