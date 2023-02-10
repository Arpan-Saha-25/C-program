
#include <stdio.h>

int main() {
  
    int number,i,j,k;
    printf("Enter a number : ");
    scanf("%d",&number);
    int ch = '$';
    for ( i = 1;i<=number ; i++){     printf("%c",ch);   }
    
    printf("\n");
    
    for(j=number-1;j>1;j--){
        for(k=j-1;k>=1;k--){
            printf(" ");
            if(k==1){   break;  }
        }
        printf("$");
        printf("\n");
    }
    
    for (int i = 1;i<=number ; i++){     printf("%c",ch);   }
    return 0;
}