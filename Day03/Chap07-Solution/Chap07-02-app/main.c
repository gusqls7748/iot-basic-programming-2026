// 여러가지 함수 유형
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 함수 적는 거 필수임
int get_num(void);		// 1. 매개변수 없는 함수. void => 매개변수가 없음

void print_char(char, int); // 2. 리턴(반환)값 없는 함수

void print_line(void); // 3. 매개 변수와 반환값이 모두 없는 함수


int main(void) {
	int result;

	print_line();		// 함수 호출(함수정의로 점프)
	printf("학번	이름	전공	학점\n");
	print_line();		// 함수 호출

	print_char('@', 5); // 함수 호출


	result = get_num();  // 함수 호출
	printf("반환값 result : %d\n", result);
	


	return 0;
}


// 이하 함수 정의 부분
void print_line(void) {
	int i;

	for (i = 0; i < 30; i++) {
		printf("-");
	}
	printf("\n");
}// 함수를 호출한 곳으로 점프백

void print_char(char ch, int count) {
	int i;

	for ( i = 0; i < count; i++){
		printf("%c", ch);
	}
	printf("\n");
	// return이 없음
}

// 매개변수가 필요없음. 키보드로 입력을 받으니깐...
int get_num(void) {
	// 함수 내용 작성
	int num; 	// 키보드에서 입력값을 저장할 변수
	int res; 	// scanf의 리턴값을 받는 변수

	printf("양수 입력 : ");
	res = scanf("%d", &num); //키보드 입력으로 값을 대입

	return num;
}

//void sum(int); // 함수 선언
//
//int main(void) {
//	sum(10);  // 10을 인자로 전달
//	sum(100); // 100을 인자로 전달 (sus 오타 수정)
//	return 0;
//}
//
//// 함수 원형: 선언과 일치하게 void sum(int n)으로 작성
//void sum(int n) {
//	int i;             // 반복 회수를 세는 변수
//	int total = 0;     // 합을 누적할 변수 (0으로 초기화 필수)
//
//	// 1부터 매개변수 n까지 1씩 증가하며 반복
//	for (i = 1; i <= n; i++) {
//		total += i;    // 합을 누적하는 변수에 더함
//	}
//
//	// 출력: n은 목표 숫자, total은 계산된 합계
//	printf("1부터 %d까지의 합은 %d입니다.\n", n, total);
//}
