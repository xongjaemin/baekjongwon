#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main() {
	char food[32][30] = { "토마토 스파게티", "김치찌개", "해물파전", "카레라이스", "닭볶음탕","고추장 스팸볶음밥",
		"견과류 멸치볶음","북어국", "골뱅이 무침","볶음우동","짜장면", "잡채밥", "짬뽕", "탕수육", "또띠아 피자", "새우 크림 리조또","돈까스","대패두루치기",
		"오코노미야끼",  "돈코츠라멘", "메밀 소바", "까르보나라", "잔치국수", "갈릭버터 오징어", "폭립", "삼계탕", "단호박 파이", "마파두부","치킨마요","낚지볶음",
	"육개장", "어묵우동" };
	char select1[16][30];
	char select2[8][30];
	char select3[4][30];
	char select4[2][30];
	char win[30];
	int sel;
	printf("\n\n\n----------32강-----------\n\n\n");

	for (int i = 0; i < 16; i++) {

		printf("1. %s vs 2. %s\n\n", food[i], food[31 - i]);

		while (1) {
			scanf("%d", &sel);
			if (sel == 1) {
				strcpy(select1[i], food[i]);
				break;
			}
			else if (sel == 2) {
				strcpy(select1[i], food[31 - i]);
				break;
			}
			else {
				printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
				continue;
			}
		}



		printf("%s를 선택하셨습니다\n\n", select1[i]);
		printf("------------------------\n\n");
	}

	printf("\n\n\n----------16강-----------\n\n\n");

	for (int i = 0; i < 8; i++) {

		printf("1. %s vs 2. %s\n\n", select1[i], select1[15 - i]);

		while (1) {
			scanf("%d", &sel);
			if (sel == 1) {
				strcpy(select2[i], select1[i]);
				break;
			}
			else if (sel == 2) {
				strcpy(select2[i], select1[15 - i]);
				break;
			}
			else {
				printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
				continue;
			}
		}



		printf("%s를 선택하셨습니다\n\n", select2[i]);
		printf("------------------------\n\n");
	}

	printf("\n\n\n--------- 8강-----------\n\n\n");

	for (int i = 0; i < 4; i++) {

		printf("1. %s vs 2. %s\n\n", select2[i], select2[7 - i]);

		while (1) {
			scanf("%d", &sel);
			if (sel == 1) {
				strcpy(select3[i], select2[i]);
				break;
			}
			else if (sel == 2) {
				strcpy(select3[i], select2[7 - i]);
				break;
			}
			else {
				printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
				continue;
			}
		}

		printf("%s를 선택하셨습니다\n\n", select3[i]);
		printf("------------------------\n\n");
	}


	printf("\n\n\n-------------4강-------------\n\n\n");

	for (int i = 0; i < 2; i++) {

		printf("1. %s vs 2. %s\n\n", select3[i], select3[3 - i]);
		while (1) {
			scanf("%d", &sel);
			if (sel == 1) {
				strcpy(select4[i], select3[i]);
				break;
			}
			else if (sel == 2) {
				strcpy(select4[i], select3[3 - i]);
				break;
			}
			else {
				printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
				continue;
			}


			printf("%s를 선택하셨습니다\n\n", select4[i]);
			printf("------------------------\n\n");
		}
	}
		printf("\n\n\n-------------결승-------------\n\n\n");

		for (int i = 0; i < 1; i++) {

			printf("1. %s vs 2. %s\n\n", select4[0], select4[1]);
			while (1) {
				scanf("%d", &sel);
				if (sel == 1) {
					strcpy(win, select4[0]);
					break;
				}
				else if (sel == 2) {
					strcpy(win, select4[1]);
					break;
				}
				else {
					printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
					continue;
				}

			}

		
		}
		printf("오늘은 너로 정했다 : ");
		puts(win);
	}
