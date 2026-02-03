#include <stdio.h>

int main() {
	int seats = 0; // 자리연산자
	int audience = 0;
	double rate = 0.0;

	rate = ((double)audience/seats) * 100;

	printf("입장률 : %1f%%\n", rate);

	return 0;

}