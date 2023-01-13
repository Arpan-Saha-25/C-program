#include<stdio.h>
#include<math.h>
long int sqrf(int b){ return sqrt((double)b);	}


int main()
{
int n;
printf("Enter a number : ");
scanf("%d",&n);

printf("The square of the number is %Lf",sqrf(n));

return 0;
}
#include<stdio.h>
#include<math.h>
long double sqrf(int b){ return sqrt((double)b);	}


int main()
{
int n;
printf("Enter a number : ");
scanf("%d",&n);

printf("The square of the number is %Lf",sqrf(n));

return 0;
}



