/* Online C Compiler and Editor */
#include <stdio.h>
#include<stdio.h>

int main()
{
    int str[1000];
    int i =1,count =0;

    printf("enter the word : ");
    scanf("%s",&str[0]);
    
    //printf("%s\n",str);   //printing the string 

    while(str[i] != '\0') {
        if(str[i] != NULL){
        count++;
        }
        ++i;
    }

    printf("the length of the word is %d.",count);

    return 0;
}