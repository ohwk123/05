#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer=12;
	int x;
	int sum=1;
	
	do
{
    printf("���ڸ� �Է��Ͻÿ�:");
	scanf("%d", &x);
	if (x>answer)
	  printf("���亸�� �����ϴ�");
	  
	else if (x<answer) 
	  printf("���亸�� �����ϴ�");
	else
	  break;
	sum += 1;
	  
}	while (x != answer);
   

    printf("�����Դϴ�!, �õ� Ƚ��%d", sum);
	  
	
	
	return 0;
}
