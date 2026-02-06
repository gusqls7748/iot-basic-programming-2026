#include	<stdio.h>

//int main(void) {
//	int a = 10;			// 초기화
//	int b = a++ + 5;	// a++ 증감 연산자 때문에 증가함
//
//	printf("a = %d, b = %d\n", a, b); // a++ 증감 연산자 때문에 증가함 a가 먼저 증가하며 11  b는 +5라서 10+ 5를 해서 15가 나온다a = 11 b = 15
//	return 0;
//
//}

int main(void) {
	int x = 7;

	if (x % 2 == 0)
		printf("A");
	else if (x > 5)
		printf("B");
	else
		printf("c");

	return 0;

	// 정답 B
	// if, else if, else에서 x % 2 에서 나머지가 1이므로 0이 아니므로 떄문에 A번이 아니다.
	// else if의 조건으로서 x = 7이라서 5 보다 커서 참이다 B가 출력된다
	// B를 출력해서 C는 출력할수가 없다.
}