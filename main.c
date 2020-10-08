#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int combination(int n, int r)
{
	int c;
	
	c = factorial(n) / ((factorial(n-r))*(factorial(r)));
	return c;
}

int factorial(int a)
{
	int res=1;
	int i;
	
	for(i=1; i<=a; i++)
		res *= i;
		
	return res;
}

int get_integer()
{
	int a;
	
	printf("숫자를 입력해주세요: ");
	scanf("%i",&a);
	
	return a;
}
int main(int argc, char *argv[]) {
	
	int a, b, result;
	
	a = get_integer();
	b = get_integer();
	result=combination(a,b);
	printf("combination result is %i\n", result);
	
	return 0;
}
