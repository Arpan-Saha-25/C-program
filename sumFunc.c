#include<stdio.h>

int sum(int x,int y);  // function declaration

int main()	       // Main function
{
int n1,n2;

printf("Enter the numbers ");

scanf("%d%d",&n1,&n2);

int total = sum(n1,n2);

printf("The sum of the numbers is %d.\n",total);

return 0;}

//definition of sum()

int sum(int x,int y)
{
	int sum1 = x+y;
	return sum1;
}
// end of program 
