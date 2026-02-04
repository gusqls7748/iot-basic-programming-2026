// swich~case 문
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 

int main() {

	printf("Switch~Case 문 예제\n");

	int rank = 0, money = 0; // 변수 선언, 초기화
	printf("등수를 입력하세요 ");
	scanf("%d", &rank);


	// 
	//switch (rank) {
	//case 1:			   // 1등 이면
	//	money = 1000;  // 1000만원
	//	break;		   // swich문을 탈출(빠져나가라) 주의!! break문이 없으면 다음 case문으로 계속 실행
	//case 2:
	//	money = 500;   // 500만원
	//	break;
	//case 3:
	//	money = 200;   // 200만원
	//	break;
	//case 4:
	//	money = 50;    // 50만원
	//	break;
	//default:           // 그 외의 모든 경우 if문 else
	//	money = 10;    // 10만원
	//	break;

	//}

	// if~else 문
	if (rank == 1) {
		money = 1000;
	}
	else if (rank == 2) {
		money = 500;
	}
	else if (rank == 3) {
		money = 200;
	}
	else if (rank == 4) {
		money = 50;
	}
	else {
		money = 10;
	}

	printf("%d등 당청금 %d만원에 당첨되셨습니다.\a\n", rank, money);

	return 0;
}
