// 다차원 배열
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main(void) {
	// int score[3][4];	// 4byte * 3 * 4 = 48bytes
	int score[3][4] = { // 2차원 배열 초기화 방법
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9,10, 11, 12}
	};
	//aint score[3][4] = { 0 }; // 모두 0 초기화
	int total;
	double avg;

	char animal[5][20]; // 동물 5마리, 이름길이 20
	int count;

	int i, j;	// 2중 for문 변수

	// 2차원 배열로 동물 이름 관리
	// count = sizeof(animal) == 100, animal[0] == 20 ==>5 5 나와야함
	count = sizeof(animal) / sizeof(animal[0]);
		//printf("%d\n", count);
	for (i = 0; i < count; i++) {
		// animal[i] == animal배열 i행의 주소
		scanf("%s", animal[i]);
	}
	for (i = 0; i < count; i++) {
		printf("%d번 동물 %s\n", i, animal[i]);
	}


	printf("\n");

	// 2차원 배열로 성적처리
	for (i = 0; i < 3; i++) {
		printf("%d번 학생, 4과목 점수 입력 : ", i);
		for (j = 0; j < 4; j++) {// 열
			scanf("%d", &score[i][j]);	// 점수 입력 (압쪽[]는 행, 바깥쪽 for문 변수, 뒤쪽[]열 안쪽 for문 변수

		}
	}
		//점수 체점
		for (i = 0; i < 3; i++) {
			total = 0;
			for (j = 0; j < 4; j++) {
				total += score[i][j];
			}
			avg = total / 4.0;

			printf("%d번 학생, 총점 : %d, 평균 : %.2lf\n", i, total, avg);
		}


	return 0;
}
