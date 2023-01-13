                        
/* GET MAXIMUM OF TWO NUMBERS */

#include <stdio.h>

int maxFunc(int *x,int *y); 	//FUNCTION DECLARATION

int main() {   			//MAIN FUNCTION
    int n1,n2,max;
    printf("Enter the numbers : ");
    scanf("%d%d",&n1,&n2);
    
    max = maxFunc(&n1,&n2);
    printf("Greatest number is %d \n",max);    
    return 0;
}

int maxFunc(int *x,int *y){  	//FUNCTION DEFINITION
    
    if (*(x)>*(y)){
        //printf("Functions value 1 : %d \n",*(x));
        return *(x);}
    else {  
        //printf("Functions value 2 : %d \n",*(y));
        return *(y);}
   } 
