#include <stdio.h>

void sum(int); // 함수 선언

int main(void) {
	sum(10);  // 10을 인자로 전달
	sum(100); // 100을 인자로 전달 (sus 오타 수정)
	return 0;
}

// 함수 원형: 선언과 일치하게 void sum(int n)으로 작성
void sum(int n) {
	int i;             // 반복 회수를 세는 변수
	int total = 0;     // 합을 누적할 변수 (0으로 초기화 필수)

	// 1부터 매개변수 n까지 1씩 증가하며 반복
	for (i = 1; i <= n; i++) {
		total += i;    // 합을 누적하는 변수에 더함
	}

	// 출력: n은 목표 숫자, total은 계산된 합계
	printf("1부터 %d까지의 합은 %d입니다.\n", n, total);
}