//#include <stdio.h>
//
//int main(void) {
//	int a = 5;
//	double b = 2.0;
//
//	printf("d%\n", a + b);
//	return 0;
//}
//
//// 2번 문제 #include <stdio.h>
//void change(int x) {	// 변수 x는 main a로부터 값 10 만 받은 변수
//	x = 100; // x 값만 100을 받음
//}
//
//int main(void) {
//	int a = 10;	// 변수 선언
//	change(a);	// a의 값을 복사해서 함수에 준다
//
//	printf("%d\n", a); // main의 a는 10이여서 10을 출력한다.
//	return 0;
//
//}
//
//
//// 3번 문제 #include <stdio.h>
//int main(void) {
//	int a = 10;		// 변수 선언
//	int* p = &a;	// 선언과 함께 a 주소를 저장
//
//	*p = 20;		// 포인터 선언
//
//	printf("%d\n", a);	//a값이 수정 되었으므로 20이 출력됨
//	return 0;
//
//}
//
//
//
//// 4번 문제 #include <stdio.h>
//
//void change(int* p) {
//	*p = 50;
//}
//
//int main(void) {
//	int a = 10;		// 변수 선언
//	change(&a);			// p라는 포인터를 a 라는 주소에 보냄
//			
//	printf("%d\n", a);	// a는 그대로여서 10 b는 30이 출력된다.
//	return 0;
//
//}
//
//// 5번 문제#include <stdio.h>
//
//int main(void) {
//	int a = 10, b = 20;		// 변수 선언
//	int* p = &a;			// p라는 포인터를 a 라는 주소에 보냄
//	int** pp = &p;			// pp라는 이중 포인터가 p라는 주소를 보낸다.
//
//	*pp = &b;				// *pp에 b 주소 저장
//	**pp = 30;				// **pp가 보내는 주소인 b에 30을 저장
//
//	printf("%d %d\n", a, b);	// a는 그대로여서 10 b는 30이 출력된다.
//	return 0;
//
//}