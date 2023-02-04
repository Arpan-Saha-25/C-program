// External storage class
#include <stdio.h>

int x =21 ;  			//global var

int main(){
	extern int y;
	printf("\nMain: x=%d y=%d ",x,y);
	test1();
	test2();
	printf("\n");
	return 0;
}
int y = 31;			//global var also

void test1(){				//printing helloworld
	printf("\ntest1: hello world ");
	return;
}

void test2(){				//printing value of x
	int x = 20;
	printf("\ntest2: x=%d",x);
	display();
	return;
}

display(){				//printing the value of x
	printf("\ndisplay: x=%d",x);
	return 0;
}


