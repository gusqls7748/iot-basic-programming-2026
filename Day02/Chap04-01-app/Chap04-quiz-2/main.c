#include <stdio.h>

int main() {
	
	
	int seats = 0;		// 자리초기화
	int audience = 0;	//관객수 초기화
	double rate = 0.0;	// 입장률 초기화

	seats = 70; // 전체관객수
	audience = 65; // 입장한 관객수
	rate = ((double)audience/seats) * 100;

	printf("입장률 : %1f%%\n", rate);

	return 0;

}