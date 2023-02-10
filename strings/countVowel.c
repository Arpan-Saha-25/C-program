// COunt the number of vowels in a string(word)
#include<stdio.h>
#include<string.h>

void main(){
    char str[1000];int count = 0,conso =0 ;

    printf("Enter the word : ");
    fgets(str,sizeof(char),stdin);

    for(int i = 0 ; str[i]!='\0' ; i++){
        if(str[i] == 'a' ||str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u'){
            count++;
        }
        else{
            conso++;
        }
    }

    printf("The number of vowels present are %d.",count);
    printf("\n the number of consonants are %d",conso);

    return;

}