#include <stdio.h>

int cost1(int age){
    int cost = 0;
    if(age > 12) cost = 500;
    
    int inc = (5*500)/100;
    age = age - 12;
    int money = age / 6;
    
    while(money > 0){
        cost = cost + inc ;
        money--;
    }
    return cost;
}

int main() {
    int age ;
    printf("Age in months : ");
    scanf("%d",&age);
    printf("Total cost : %d",cost1(age));
    return 0;
}