#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sumTwo(int a,int b)
{
	
	return a+b;
}

int square(int n)
{
	return n*n;
}
int get_max(int x,int y)
{
	if (x>y)
		return x;
	else if(x<y)
		return y;
		
}

int main(int argc, char *argv[]) {
	

	printf("sumTwo: %d\n",sumTwo(2,5) );
	printf("square: %d\n",square(5));
	printf("get_max: %d",get_max(5,7));
	
	return 0;
}
