#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer=12;
	int x;
	int sum=1;
	
	do
{
    printf("숫자를 입력하시오:");
	scanf("%d", &x);
	if (x>answer)
	  printf("정답보다 높습니다");
	  
	else if (x<answer) 
	  printf("정답보다 낮습니다");
	else
	  break;
	sum += 1;
	  
}	while (x != answer);
   

    printf("정답입니다!, 시도 횟수%d", sum);
	  
	
	
	return 0;
}
