#include<stdio.h>
#include<math.h>

int getDigits(int i);
int getArmstrong(int x,int y);

int main()
{
	/* check whether a number is armstrong number or not  */

	int userNum;
	printf("Enter a number : ");
	scanf("%d",&userNum);						//user se number le liya 
	int digits = getDigits(userNum);			//power mil gaya
	printf("digits : %d",digits);
	int check = getArmstrong(digits,userNum);			// sum ka value milega

	if(check == userNum){printf("\nIt is an armstrong number.");}
	else {printf("\nIt is not  an armstrong number.");}

	return 0;
}


int getDigits(int i){							//power pta chal jayega 
	int count = 0 ;
	while(i!=0)
	{	i = i/10;
		count++;	
	}
	return count;
	}

	
int getArmstrong(int x,int y){				//x power and y userNum
	int sum =0;
	int tempNum = y;
	while(tempNum!=0){
		int rem = tempNum%10;
		sum = sum + pow(rem,x);
		tempNum = tempNum /10;

	}

return sum;

}




/* algorithm apun k style me 

Take number from user 

func1 --- number of digits 
		  while(i!=0)
		  	  {int 124/10 = 12 
		  	  12/10 = 1
		  	  1/10  = 0}

func2 --- number ka sum of digits with the power (func1 se return wala no.)
			check number = sum of digits same h ki nhi 
			return 1 if true
			return 0 if false 

main --- if 1 -> arms. no. else false 

*/