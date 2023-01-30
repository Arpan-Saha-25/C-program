//wap to copy the given string without using strcpy()

#include<stdio.h>

int  main()
{
    char arr[1000];
    printf("Enter your string :");
    scanf("%s",arr);

    fgets(arr,sizeof(arr),stdin);

    char strcpy[1000];
    for(unsigned int i = 0 ; i < sizeof(arr) ; i++) {
        strcpy[i] = arr[i];
    }
    printf("Your string is : %s ",strcpy);
    return 0;
}


