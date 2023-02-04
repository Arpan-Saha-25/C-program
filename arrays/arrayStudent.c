#include<stdio.h>
void main(){
	int i,j,student[100][10];
	int x,y,total[100],totalmark=0;
	
	printf("Enter the number of students : ");
	scanf("%d",&x);
	printf("enter the no. of Subject of students : ");
	scanf("%d",&y);

	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			scanf("%d",&student[i][j]);
		

			//printf("marks of student number %d = %d",i,student[i][j]);
	}

	//printf("\n");
	}

for(i=0;i<x;i++){
printf("marks of student no. %d=",i);

for(j=0;j<y;j++){
printf("%d\t",student[i][j]);

}
printf("\n");
}

	





}
