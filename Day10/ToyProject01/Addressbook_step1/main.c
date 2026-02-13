// 주소록 프로그램 step1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

// 함수 선언
static void print_menu(void);		// 이 소스내에서만 쓰겠다.
static int read_menu(void);

int main(void) {
	int choice = 0;

	while (1) {					// 무한루프 :
		print_menu();			// 메뉴를 출력
		choice = read_menu();	// choice 값에 입력 받음

		// 입력받은 번호(choice)에 값을 입력 받는다
		switch (choice) {
		case 1:		// 1을 받았다면
			printf("%s\n", "[ADD] 연락처 추가 (기능 구현요");
			break;	// swich문을 빠져나가 다시 while문의 처음으로 들어간다.

		case 2:
			puts("[LIST] 연락처 목록");
			break;

		case 3:
			puts("[SEARCH] 연락처 검색");
			break;

		case 4:
			puts("[EDIT] 연락처 수정");
			break;

		case 5:
			puts("[DELETE] 연락처 삭제");
			break;

		case 6:
			puts("프로그램 종료");
			return 0;	// 메인 함수를 종료하여 프로그램을 완전히 끝냄

		default:		// 1 ~ 6 외의 엉뚱한 값을 받으면
			puts("메뉴는 1~6사이 입니다.");
			break;		// swich문을 빠져나가 다시 while문의 처음으로 들어간다.
		}

		puts("");		// 가독성을 위해 한 줄 뛰움
	}


	return 0;
}

static void print_menu(void) {
	puts("==================================================");
	puts("               주소록 프로그램 (Step 1)           ");
	puts("==================================================");
	puts("1. 추가");
	puts("2. 목록");
	puts("3. 검색");
	puts("4. 수정");
	puts("5. 삭제");
	puts("6. 종료");
	puts("==================================================");



}

static int read_menu(void) {
	int choice, ch;	//변수 선언


	printf("선택 > ");

	// scanf는 성공적으로 숫자를 읽으면 1을 반환한다.
	if (scanf("%d", &choice) != 1) {
		// 사용자가 숫자 아닌 '문자(abc)입력하면 입력버퍼에 쓰레기값이 남아 무한 루프에 빠질 수 있다.
		while ((ch = getchar()) != '\n' && ch != EOF) {}
		return -1;	// 잘못된 입력임을 알리기 위해 -1 반환

	}

	// scanf 뒤에 있는 버퍼에 엔터값 제거
	while ((ch = getchar()) != '\n' && ch != EOF) {}

	return choice;

}