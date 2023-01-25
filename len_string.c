#include <stdio.h>
#include<stdio.h>

//count the length of the given string

int main()
{
    char str[1000];
    int i =0,count =0;

    printf("enter the word : "); //taking string
    scanf("%s",&str);
    printf("%s\n",str);   //printing the string
//using while loop
    while(str[i++] != '\0') {
        //if(str[i] != NULL){
        count++;
        //}
        //i++;
    }
    printf("By *while* loop, the length of the word is %d.\n",count);

//using for loop
    int count1 = 0;
    for (int i = 0 ; i < 1000 ; i++) {
        if(str[i] != '\0') {
            count1++;
        }
        if(str[i]=='\0') break;
    }

    printf("By *for* loop , the length of the word is %d.\n",count);

    return 0;
}