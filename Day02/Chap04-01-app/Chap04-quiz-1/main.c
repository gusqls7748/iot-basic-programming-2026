#include <stdio.h>

int main(void)
{
	
	int res;

	res = (sizeof(long) > sizeof(short));

	printf("%s형의 크기가 더큽니다.\n", res ? "long" : "short");
	

	return 0;



}