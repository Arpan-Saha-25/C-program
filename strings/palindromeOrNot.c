#include<stdio.h>
#include<string.h>
#define MAX_LIMIT 20
int main(){
char str[MAX_LIMIT],pal[MAX_LIMIT];
fgets(str,MAX_LIMIT,stdin);
int i;
int length=strlen(str);
int a = length;
for (i=0;i<=length;i++){
if (str[i]!='\0'){	
pal[a]=str[i];
	a--;
	}
}
printf("%s \n",pal);
return 0;}

