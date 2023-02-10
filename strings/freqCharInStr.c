// frequency of characters in a string
#include <stdio.h>
#include<string.h>
int main()
{
    int size;
    char ch;
    int count  = 0 ;
    printf("Enter the length of word : ");
    scanf("%d",&size);
    //printf("size word :%d ",size);
    printf("Enter the alphabet for which you want its frequency :"); 
    ch=getchar();   //character jiska freq chahiye
    //getch("%c",&ch); 

    char arr[size];
    printf("Enter the word :");
    for(int i = 0 ; i <= size ; i++) {
        arr[i]=getchar();
        printf("\narr:%c\n",arr[i]);
    }
    scanf("%s",arr);

    for(int i = 0; i < size ; i++) {
        if(ch == *(arr+i)) {
            count++;
        }
    }

    printf("The frequency of '%c' is %d .",ch,count);
    return 0;
}