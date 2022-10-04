#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int cnt=0;
	printf("input a string:");
	
	while ((c=getchar())!='\n')//입력 문자가 갱행문자가 나올때까지 반복 
	{if(c>=48 && c<=57)
	  cnt+=1;
	else
	  continue;
	 }
	 printf("the number of digits is %i", cnt);
	return 0;
}
