// for문

#include <stdio.h>

int main() {
	int a = 1;
	int i;		// 반복문을 위한 변수
	

	//
	//for (초기값; 조건식;증강식) {
	//반복할 실행문 코드;
	//
	//

	for (i = 0; i < 5; i++) {
		a = a * 2;
	}
		printf("a : %d\n", a); // for 문을 빠져나온 뒤 a 값 콘솔 출력


	// $를 열번 출력
	for (i = 0; i < 10; i++) {
		printf("%c", '$'); // printf("$"), printf(" % s", "$") 
	}
		printf("\n");

	// 이중 for문
	int j = 0;

	for (i = 0; i < 3; i++) {
		printf("%c", "*");
		for (j = 0; j < 5; j++) {
			printf("%s", "*");
		}
		printf("\n");
	}
	return 0;
}