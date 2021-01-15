#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>

#pragma comment(lib, "winmm.lib")


// 요리프로그램, 추천프로그램, 기록 프로그램
void cook();
void what();
void record();

// 요리 목록

//**한식**

//김치찌개 
void kim();
void kimrec();
//해물파전
void hae();
void haerec();
//카레라이스
void ca();
void carec();
//닭볶음탕
void dac();
void dacrec();
//고추장 스팸볶음밥
void gocu();
void gocurec();
//견과류 멸치볶음
void jam();
void jamrec();
//북어국
void book();
void bookrec();
//골뱅이 무침
void goal();
void goalrec();
//대패두루치기
void dae();
void daerec();
//잔치국수
void jan();
void janrec();
//갈릭버터 오징어
void han();
void hanrec();
//삼계탕
void sam();
void samrec();
//낚지볶음
void nac();
void nacrec();
//육개장
void uk();
void ukrec();

//**양식**

//또띠아 피자
void ddo();
void ddorec();
//새우 크림 리조또
void shrimp();
void shrimprec();
//까르보나라
void cca();
void ccarec();
//토마토 스파게티
void to();
void torec();
//폭립
void pork();
void porkrec();
//단호박 파이
void dan();
void danrec();

//**중식**

//볶음우동
void bwoo();
void bwoorec();
//짜장면
void zza();
void zzarec();
//잡채밥
void zzap();
void zzaprec();
//짬뽕
void zzam();
void zzamrec();
//탕수육
void tang();
void tangrec();
//마파두부
void map();
void maprec();

//**일식**

//돈까스
void donca();
void doncarec();
//오코노미야끼
void occ();
void occrec();
//돈코츠라멘
void donco();
void doncorec();
//메밀소바
void mee();
void meerec();
//치킨마요
void chic();
void chicrec();
//어묵우동
void mook();
void mookrec();


//만든 메뉴 기록할 구조체
struct record {
	char food[30];
	char date[30];
};

int main() {
	printf("\t\t```````````````````````   `:```.\n");
	printf("\t\t``````````````````` `  .=O#888O=I.I+O88O+;\n");
	printf("\t\t```````````````      :E##EO88#M##E###888### + .\n");
	printf("\t\t`````````` `` ``  `+o##EE8E##EEM##MM###E#E88M8I`\n");
	printf("\t\t``````````````  ~OM####EEEE8OO8##EEEE##E#MEEEE##E~\n");
	printf("\t\t```````````` + M#EE88####E###MMMM#MM##MMM######M = `\n");
	printf("\t\t``````` ```   oME######E8E###Eoi=iio88#M###MM#####o.\n");
	printf("\t\t````````  `  OME#####E88#MEE+:~~:~~~~~:::;=iO#M##MME`\n");
	printf("\t\t`````````   =M#MM##8Ii8##8+;~~~~~~~~~~~~::;==iO#M#M#~\n");
	printf("\t\t````````` ` O#MMME+;:~~~~~~~~....~~~~~~~~~:I==iiEM##o\n");
	printf("\t\t``````      #E##EO;::~:~~~~~~....~~~~~~~~~:;I====#MM8\n");
	printf("\t\t``          MEM#8O;::~~~~~~~~...~~~~~~~...~:;II==8MM#\n");
	printf("\t\t```         +###E8;::~~;+++o+i=II:~~~~~:;Ii+i+iII#MMM\n");
	printf("\t\t ``         =M###8;:~~~~:~.`..~~~~..~~:IIIIIioOiIMMM;\n");
	printf("\t\t``          ;M###8:~~~~:~~;=i=I:;~~.~;I~...~~;II;M#\n");
	printf("\t\t  `          IiM#8:~~~~:;=:I=;==:~~.~=;;=iOo+i==:Mi\n");
	printf("\t\t            .I`~E8::~.....~~~:~~~~...I=:~~~:I=I=;#`\n");
	printf("\t\t            `:.::=:~~~.....~~~~.~~~..:I;~~~~~~:;;E.\n");
	printf("\t\t            .~~.~;:~~~..`...~:;~.....~;;=~...~:;;o\n");
	printf("\t\t            `~.~:::~~~~~..~I;~~:Ii::;io==I:~~~:;I+\n");
	printf("\t\t             `~.:::~~~~~.II..~....~~~~~::::;~:;I=i\n");
	printf("\t\t               .:::~~~~~:;:I;:::~:::;;;II=I:~~Iii`\n");
	printf("\t\t                ::::~~~~~.~::;II:::::;I+O=:~.:=+~\n");
	printf("\t\t                ::::~~~~~~.......~~:::;;:~:~:=+=\n");
	printf("\t\t                ::::~~~~::~~.....~~~~::~~:IIi+=\n");
	printf("\t\t                ::::::~~~::~~......~~~~::Ii++;\n");
	printf("\t\t               `:::~~~::::~~~~~~.~~~~::;=i=i\n");
	printf("\t\t              `=:~~~~.~~~~~~~~:::;;;II====+I\n");
	printf("\t\t            `   .~~~~~~~~~~~~~~::;;;;I==i+O\n");
	printf("\t\t                  `.~~~~~~~~~::::;;I==i+oOE;\n");
	printf("\t\t                     `..~~~.~~~~::~:=ioO8#i:\n");
	printf("\t\t                         `~~....~~~;i+oO+~;;I.`\n");
	printf("\t\t                           .:.~~~:I==II:~~;;=::..```\n");

	printf(".#O   :#+  #MI     `MMMMMMMMMMO        ==      O#.         ~#o  O#.`#8 #M;    o###EEEE####.     ~+E##o;  ~MM\n");
	printf(".MM+++8MO  EM:      ``````` =Mo        MM`     EM~         :MM++MM~`M# 8M:    ;IIIOMMM=III     +MEIII8MO .M#\n");
	printf(".MM8OOEMO  EMMM#            =Mi       ~MM~ ;MMMMM~         :MMOOMM~`MMMMM:   ~;=OMM+~MME+;;    =MMooo#M+ .M#\n");
	printf(".M#;::+MO  EMi~~            +M;      IMMMM~ ~::#M~         :MMOOMM~`M#~EM:   `M8i~ i8  IoMi      ;+++;   .M#\n");
	printf(".MMMMM##+  EM;   IM#####EE##MMM##  iMMO` oMM=  #M~         .+iii=i `M# 8M:  I#88EEEMM#EEE8EE  8##EE88E##o.M#\n");
	printf("     ~I=ii;iI.   ~i=====MMi======   ;  ..`.i:..io.            ;iii++oo++o.  ~i=II=+o++iII===  :i=IIMMiio+;M#\n");
	printf("   8MME888MM#~          #M.           EMMMMMMMMMM~            iE8888888MM:     I#MMMMMMMo       .oI#M.;MMMMM\n");
	printf("  ;M#.     8Mo          #M.                    EM~                     8M:    ;M#`     iME      IMO       i=\n");
	printf("   ;EMMMMMMM=           MM.                    #M~                     EM;     8MM####MMM:      IMM#######E#;\n");
	printf("       ``               =i`                    I=`                     ;=.       ~I===;`        .==========i.\n");

	//백종원 목소리 재생
	PlaySound(TEXT("baek.wav"), NULL, SND_SYNC);


	int k;
	printf("\n\n\n******** 안녕하세유 반가워유! *********");
	printf("\n\1. 요리해볼까유? \n2. 메뉴 선택할까유? \n3. 요리한 것들 기록 보기 \n4. 프로그램 끝내기\n\n");

	while (1) {
		scanf("%d", &k);
		if (k == 1) {
			cook();
			break;
		}
		else if (k == 2) {
			what();
			break;
		}
		else if (k == 3) {
			record();
			break;
		}
		else if (k == 4) {
			exit(1);
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

	return 0;
}
//기록 파일 여는 함수
void record() {
	FILE *fp;

	fp = fopen("record.txt", "r");
	char a[200];
	if (fp == NULL) {
		printf("error");
		exit(1);
	}





	for (int i = 0; !feof(fp); i++)
	{
		fgets(a, 200, fp);
		printf("%s", a);
	}

	fclose(fp);
}
//요리 선택 함수 
void cook() {

	int c, k;
	//한식, 양식, 중식, 일식 중 선택 가능
	printf("\n어떤 종류의 음식을 만들까유? \n\n1. 한식(14종류) \n 2. 양식(6종류) \n 3. 중식(6종류) \n 4.일식(6종류) \n");

	while (1) {
		scanf("%d", &c);
		if (c == 1) {
			printf("한식 메뉴 보여드릴까유? (엔터쳐주세유)\n");
			getchar();
			printf("1. 김치찌개\n");
			printf("2. 해물파전\n");
			printf("3. 카레라이스\n");
			printf("4. 닭볶음탕\n");
			printf("5. 고추장 스팸볶음밥\n");
			printf("6. 견과류 멸치볶음\n");
			printf("7. 북어국\n");
			printf("8. 골뱅이 무침\n");
			printf("9. 대패두루치기\n");
			printf("10. 잔치국수\n");
			printf("11. 갈릭버터 오징어\n");
			printf("12. 삼계탕\n");
			printf("13. 낚지볶음\n");
			printf("14. 육개장\n");

			printf("\n\n어떤것을 만들까유? : ");

			//메뉴 선택하면 그 메뉴 함수로 넘어감
			while (1) {
				scanf("%d", &k);

				if (k == 1) {
					kim();
					break;
				}
				else if (k == 2) {
					hae();
					break;
				}
				else if (k == 3) {
					ca();
					break;
				}
				else if (k == 4) {
					dac();
					break;
				}
				else if (k == 5) {
					gocu();
					break;
				}
				else if (k == 6) {
					jam();
					break;
				}
				else if (k == 7) {
					book();
					break;
				}
				else if (k == 8) {
					goal();
					break;
				}
				else if (k == 9) {
					dae();
					break;
				}
				else if (k == 10) {
					jan();
					break;
				}
				else if (k == 11) {
					han();
					break;
				}
				else if (k == 12) {
					sam();
					break;
				}
				else if (k == 13) {
					nac();
					break;
				}
				else if (k == 14) {
					uk();
					break;
				}

				else
					printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
			}
			break;
		}
		else if (c == 2) {
			printf("양식 메뉴 보여드릴까유? (엔터쳐주세유) \n");
			getchar();
			printf("1. 또띠아 피자\n");
			printf("2. 새우 크림 리조또\n");
			printf("3. 까르보나라\n");
			printf("4. 토마토 스파게티\n");
			printf("5. 폭립\n");
			printf("6. 단호박 파이\n");

			printf("\n\n어떤것을 만들까유? : ");

			while (1) {
				scanf("%d", &k);

				if (k == 1) {
					ddo();
					break;
				}
				else if (k == 2) {
					shrimp();
					break;
				}
				else if (k == 3) {
					cca();
					break;
				}
				else if (k == 4) {
					to();
					break;
				}
				else if (k == 5) {
					pork();
					break;
				}
				else if (k == 6) {
					dan();
					break;
				}
				else
					printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
			}

			break;
		}
		else if (c == 3) {
			printf("중식 메뉴 보여드릴까유? (엔터쳐주세유) \n");
			getchar();
			printf("1. 볶음우동\n");
			printf("2. 짜장면\n");
			printf("3. 잡채밥\n");
			printf("4. 짬뽕\n");
			printf("5. 탕수육\n");
			printf("6. 마파두부\n");

			printf("\n\n어떤것을 만들까유? : ");

			while (1) {
				scanf("%d", &k);

				if (k == 1) {
					bwoo();
					break;
				}
				else if (k == 2) {
					zza();
					break;
				}
				else if (k == 3) {
					zzap();
					break;
				}
				else if (k == 4) {
					zzam();
					break;
				}
				else if (k == 5) {
					tang();
					break;
				}
				else if (k == 6) {
					map();
					break;
				}
				else
					printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
			}
			break;
		}
		else if (c == 4) {
			printf("일식 메뉴 보여드릴까유? (엔터쳐주세유) \n");
			getchar();
			printf("1. 돈까스\n");
			printf("2. 오코노미야끼\n");
			printf("3. 돈코츠라멘\n");
			printf("4. 메밀소바\n");
			printf("5. 치킨마요\n");
			printf("6. 어묵우동\n");

			printf("\n\n어떤것을 만들까유? : ");

			while (1) {
				scanf("%d", &k);

				if (k == 1) {
					donca();
					break;
				}
				else if (k == 2) {
					occ();
					break;
				}
				else if (k == 3) {
					donco();
					break;
				}
				else if (k == 4) {
					mee();
					break;
				}
				else if (k == 5) {
					chic();
					break;
				}
				else if (k == 6) {
					mook();
					break;
				}
				else
					printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
			}
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");

	}







}
//음식 토너먼트 함수, 32강부터 시작한다
void what() {
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

	int j = 0, select;

	//정한 메뉴를 만들어 줄 수 있게 함
	printf("\n지금 만들어 볼까유??");
	printf("1. 네 2. 아니오\n");
	scanf("%d", &j);

	while (1) {

		if (j == 1) {
			if (!strcmp(win, "김치찌개")) {
				kim();
				break;
			}
			else 	if (!strcmp(win, "해물파전")) {
				hae();
				break;
			}
			else 	if (!strcmp(win, "카레라이스")) {
				ca();
				break;
			}
			else 	if (!strcmp(win, "닭볶음탕")) {
				dac();
				break;
			}
			else 	if (!strcmp(win, "고추장 스팸볶음밥")) {
				gocu();
				break;
			}
			else 	if (!strcmp(win, "견과류 멸치볶음")) {
				jam();
				break;
			}
			else 	if (!strcmp(win, "북어국")) {
				book();
				break;
			}
			else 	if (!strcmp(win, "골뱅이 무침")) {
				goal();
				break;
			}
			else 	if (!strcmp(win, "대패두루치기")) {
				dae();
				break;
			}
			else 	if (!strcmp(win, "잔치국수")) {
				jan();
				break;
			}
			else 	if (!strcmp(win, "갈릭버터 오징어")) {
				han();
				break;
			}
			else 	if (!strcmp(win, "삼계탕")) {
				sam();
				break;
			}
			else 	if (!strcmp(win, "낚지볶음")) {
				nac();
				break;
			}
			else 	if (!strcmp(win, "육개장")) {
				uk();
				break;
			}
			else 	if (!strcmp(win, "또띠아 피자")) {
				ddo();
				break;
			}
			else 	if (!strcmp(win, "새우 크림 리조또")) {
				shrimp();
				break;
			}
			else 	if (!strcmp(win, "까르보나라")) {
				cca();
				break;
			}
			else 	if (!strcmp(win, "토마토 스파게티")) {
				to();
				break;
			}
			else 	if (!strcmp(win, "폭립")) {
				pork();
				break;
			}
			else 	if (!strcmp(win, "단호박 파이")) {
				dan();
				break;
			}
			else 	if (!strcmp(win, "볶음우동")) {
				bwoo();
				break;
			}
			else 	if (!strcmp(win, "짜장면")) {
				zza();
				break;
			}
			else 	if (!strcmp(win, "잡채밥")) {
				zzap();
				break;
			}
			else 	if (!strcmp(win, "탕수육")) {
				tang();
				break;
			}
			else 	if (!strcmp(win, "마파두부")) {
				map();
				break;
			}
			else 	if (!strcmp(win, "돈까스")) {
				donca();
				break;
			}
			else 	if (!strcmp(win, "오코노미야끼")) {
				occ();
				break;
			}
			else 	if (!strcmp(win, "돈코츠라멘")) {
				donco();
				break;
			}
			else 	if (!strcmp(win, "메밀소바")) {
				mee();
				break;
			}
			else 	if (!strcmp(win, "치킨마요")) {
				chic();
				break;
			}
			else 	if (!strcmp(win, "어묵우동")) {
				mook();
				break;
			}

		}
		else if (j == 2) {
			printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


			while (1) {
				scanf("%d", &select);
				if (select == 1) {
					main();
					break;
				}
				else if (select == 2) {
					exit(1);
				}
				else {
					printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
				}
			}
			break;
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

}

//음식 함수들
void kim() {

	FILE *fp1;
	fp1 = fopen("kim.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			kimrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void hae() {

	FILE *fp1;
	fp1 = fopen("hae.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			haerec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void ca() {

	FILE *fp1;
	fp1 = fopen("ca.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			carec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void dac() {

	FILE *fp1;
	fp1 = fopen("dac.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			dacrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void gocu() {

	FILE *fp1;
	fp1 = fopen("gocu.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			gocurec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void jam() {

	FILE *fp1;
	fp1 = fopen("jam.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			jamrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void book() {

	FILE *fp1;
	fp1 = fopen("book.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			bookrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void goal() {

	FILE *fp1;
	fp1 = fopen("goal.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			goalrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void dae() {

	FILE *fp1;
	fp1 = fopen("dae.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			daerec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void jan() {

	FILE *fp1;
	fp1 = fopen("jan.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			janrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void han() {

	FILE *fp1;
	fp1 = fopen("han.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			hanrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void sam() {

	FILE *fp1;
	fp1 = fopen("sam.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			samrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void nac() {

	FILE *fp1;
	fp1 = fopen("nac.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			nacrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void uk() {

	FILE *fp1;
	fp1 = fopen("uk.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			ukrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void ddo() {

	FILE *fp1;
	fp1 = fopen("ddo.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			ddorec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void shrimp() {

	FILE *fp1;
	fp1 = fopen("shrimp.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			shrimprec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void cca() {

	FILE *fp1;
	fp1 = fopen("cca.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			ccarec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void to() {

	FILE *fp1;
	fp1 = fopen("to.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			torec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void pork() {

	FILE *fp1;
	fp1 = fopen("pork.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			porkrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void dan() {

	FILE *fp1;
	fp1 = fopen("dan.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			danrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void bwoo() {

	FILE *fp1;
	fp1 = fopen("bwoo.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			bwoorec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void zza() {

	FILE *fp1;
	fp1 = fopen("zza.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			zzarec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void zzap() {

	FILE *fp1;
	fp1 = fopen("zzap.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			zzaprec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void zzam() {

	FILE *fp1;
	fp1 = fopen("zzam.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			zzamrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void tang() {

	FILE *fp1;
	fp1 = fopen("tang.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			tangrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void map() {

	FILE *fp1;
	fp1 = fopen("map.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			maprec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void donca() {

	FILE *fp1;
	fp1 = fopen("donca.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			doncarec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void occ() {

	FILE *fp1;
	fp1 = fopen("occ.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			occrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void donco() {

	FILE *fp1;
	fp1 = fopen("donco.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			doncorec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void mee() {

	FILE *fp1;
	fp1 = fopen("mee.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			meerec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void chic() {

	FILE *fp1;
	fp1 = fopen("chic.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			chicrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

void mook() {

	FILE *fp1;
	fp1 = fopen("mook.txt", "r");


	char a[200];
	int i;
	int j;

	if (fp1 == NULL) {
		printf("error");
		exit(1);
	}


	for (i = 0; !feof(fp1); i++)
	{
		fgets(a, 200, fp1);
		printf("%s", a);
	}
	fclose(fp1);

	printf("\n\n");
	printf("재료가 준비되셨나유? 요리를 시작할까유?\n");
	printf("1. 예\t2. 다른 요리 고르기\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("요리를 시작해유. 레시피를 잘 보고 따라오세유! \n");
			mookrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("잘못 입력하셨습니다. 다시 입력하세요.\n");
	}

}

// 음식 방법 함수들
void kimrec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "김치찌개");


	fp = fopen("kimrec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
		getchar();
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);

	//printf("\n%s \t %s\n", b.food, b.date);

	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}

void bookrec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "북어국");


	fp = fopen("bookrec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		if (i == 9) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 20;
			printf("\n****엔터를 쳐주세유, 시간 재드려유****\n");
			getchar();
			while (time > 0) {
				printf("%d 분 남았어유~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
			continue;
		}
		else {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);


			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
		}
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}

void bwoorec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "볶음우동");


	fp = fopen("bwoorec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
		getchar();
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}

void carec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "카레라이스");


	fp = fopen("carec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
		getchar();
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}

void ccarec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "까르보나라");


	fp = fopen("ccarec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
		getchar();
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}

void chicrec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "치킨마요");


	fp = fopen("chicrec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
		getchar();
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}

void dacrec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "닭볶음탕");


	fp = fopen("dacrec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
		getchar();
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}

void daerec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "대패두루치기");


	fp = fopen("dacrec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
		getchar();
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}

void danrec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "단호박파이");


	fp = fopen("danrec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		if (i == 5) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 8;
			printf("\n****엔터를 쳐주세유, 시간 재드려유****\n");
			getchar();
			while (time > 0) {
				printf("%d 분 남았어유~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
			continue;
		}
		else if (i == 7) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 40;
			printf("\n****엔터를 쳐주세유, 시간 재드려유****\n");
			getchar();
			while (time > 0) {
				printf("%d 분 남았어유~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
			continue;
		}
		else {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);


			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
		}
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}

void ddorec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "또띠아 피자");


	fp = fopen("ddorec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
		getchar();
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}

void doncarec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "돈까스");


	fp = fopen("doncarec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
		getchar();
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}

void doncorec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "돈코츠라멘");


	fp = fopen("doncorec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		if (i == 3) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 40;
			printf("\n****엔터를 쳐주세유, 시간 재드려유****\n");
			getchar();
			while (time > 0) {
				printf("%d 분 남았어유~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
			continue;
		}
		else if (i == 5) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 5;
			printf("\n****엔터를 쳐주세유, 시간 재드려유****\n");
			getchar();
			while (time > 0) {
				printf("%d 분 남았어유~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
			continue;
		}
		else {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);


			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
		}
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}

void goalrec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "골뱅이 무침");


	fp = fopen("goalrec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		if (i == 6) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 5;
			printf("\n****엔터를 쳐주세유, 시간 재드려유****\n");
			getchar();
			while (time > 0) {
				printf("%d 분 남았어유~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
			continue;
		}

		else {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);


			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
		}
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}

void gocurec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "고추장 스팸볶음밥");


	fp = fopen("gocurec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
		getchar();
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}
void haerec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "해물파전");


	fp = fopen("haerec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
		getchar();
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}

void hanrec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "갈릭버터 오징어");


	fp = fopen("hanrec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		if (i == 3) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 4;
			printf("\n****엔터를 쳐주세유, 시간 재드려유****\n");
			getchar();
			while (time > 0) {
				printf("%d 분 남았어유~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
			continue;
		}

		else {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);


			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
		}
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}

void jamrec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "견과류 멸치볶음");


	fp = fopen("jamrec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
		getchar();
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}

void janrec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "잔치국수");


	fp = fopen("janrec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
		getchar();
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}

void maprec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "마파두부");


	fp = fopen("maprec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
		getchar();
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}


void meerec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "메밀소바");


	fp = fopen("meerec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		if (i == 2) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 15;
			printf("\n****엔터를 쳐주세유, 시간 재드려유****\n");
			getchar();
			while (time > 0) {
				printf("%d 분 남았어유~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
			continue;
		}
		if (i == 3) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 10;
			printf("\n****엔터를 쳐주세유, 시간 재드려유****\n");
			getchar();
			while (time > 0) {
				printf("%d 분 남았어유~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
			continue;
		}
		else {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);


			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
		}
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}

void mookrec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "어묵우동");


	fp = fopen("mookrec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		if (i == 2) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 10;
			printf("\n****엔터를 쳐주세유, 시간 재드려유****\n");
			getchar();
			while (time > 0) {
				printf("%d 분 남았어유~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
			continue;
		}
		else {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);


			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
		}
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}

void nacrec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "낚지볶음");


	fp = fopen("nacrec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		if (i == 2) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 30;
			printf("\n****엔터를 쳐주세유, 시간 재드려유****\n");
			getchar();
			while (time > 0) {
				printf("%d 초 남았어유~ \n", time);
				Sleep(1000);
				time--;
			}
			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
			continue;
		}
		if (i == 4) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 60;
			printf("\n****엔터를 쳐주세유, 시간 재드려유****\n");
			getchar();
			while (time > 0) {
				printf("%d 초 남았어유~ \n", time);
				Sleep(1000);
				time--;
			}
			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
			continue;
		}
		else {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);


			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
		}
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}

void occrec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "오코노미야키");


	fp = fopen("occrec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
		getchar();
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}

void porkrec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "폭립");


	fp = fopen("porkrec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		if (i == 1) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 2;
			printf("\n****엔터를 쳐주세유, 시간 재드려유****\n");
			getchar();
			while (time > 0) {
				printf("%d 시간 남았어유~ \n", time);
				Sleep(100000);
				time--;
			}
			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
			continue;
		}
		if (i == 4) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 15;
			printf("\n****엔터를 쳐주세유, 시간 재드려유****\n");
			getchar();
			while (time > 0) {
				printf("%d 분 남았어유~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
			continue;
		}
		if (i == 7) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 10;
			printf("\n****엔터를 쳐주세유, 시간 재드려유****\n");
			getchar();
			while (time > 0) {
				printf("%d 분 남았어유~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
			continue;
		}
		if (i == 8) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 10;
			printf("\n****엔터를 쳐주세유, 시간 재드려유****\n");
			getchar();
			while (time > 0) {
				printf("%d 분 남았어유~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
			continue;
		}
		else {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);


			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
		}
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}

void samrec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "삼계탕");


	fp = fopen("samrec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		if (i == 6) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 30;
			printf("\n****엔터를 쳐주세유, 시간 재드려유****\n");
			getchar();
			while (time > 0) {
				printf("%d 분 남았어유~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
			continue;
		}
		else {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);


			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
		}
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}

void shrimprec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "새우 크림 리조또");


	fp = fopen("shrimprec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		if (i == 4) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 60;
			printf("\n****엔터를 쳐주세유, 시간 재드려유****\n");
			getchar();
			while (time > 0) {
				printf("%d 초 남았어유~ \n", time);
				Sleep(1000);
				time--;
			}
			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
			continue;
		}
		if (i == 8) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 3;
			printf("\n****엔터를 쳐주세유, 시간 재드려유****\n");
			getchar();
			while (time > 0) {
				printf("%d 분 남았어유~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
			continue;
		}
		else {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);


			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
		}
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}

void tangrec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "탕수육");


	fp = fopen("tangrec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
		getchar();
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}

void torec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "토마토 스파게티");


	fp = fopen("torec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		if (i == 6) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 7;
			printf("\n****엔터를 쳐주세유, 시간 재드려유****\n");
			getchar();
			while (time > 0) {
				printf("%d 분 남았어유~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
			continue;
		}
		if (i == 7) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 3;
			printf("\n****엔터를 쳐주세유, 시간 재드려유****\n");
			getchar();
			while (time > 0) {
				printf("%d 분 남았어유~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
			continue;
		}
		else {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);


			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
		}
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}

void ukrec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "육개장");


	fp = fopen("ukrec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		if (i == 1) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 60;
			printf("\n****엔터를 쳐주세유, 시간 재드려유****\n");
			getchar();
			while (time > 0) {
				printf("%d 분 남았어유~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
			continue;
		}
		if (i == 4) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 2;
			printf("\n****엔터를 쳐주세유, 시간 재드려유****\n");
			getchar();
			while (time > 0) {
				printf("%d 시간 남았어유~ \n", time);
				Sleep(100000);
				time--;
			}
			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
			continue;
		}
		if (i == 7) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 60;
			printf("\n****엔터를 쳐주세유, 시간 재드려유****\n");
			getchar();
			while (time > 0) {
				printf("%d 초 남았어유~ \n", time);
				Sleep(1000);
				time--;
			}
			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
			continue;
		}
		if (i == 11) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 5;
			printf("\n****엔터를 쳐주세유, 시간 재드려유****\n");
			getchar();
			while (time > 0) {
				printf("%d 분 남았어유~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
			continue;
		}
		if (i == 13) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 10;
			printf("\n****엔터를 쳐주세유, 시간 재드려유****\n");
			getchar();
			while (time > 0) {
				printf("%d 분 남았어유~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
			continue;
		}
		else {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);


			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
		}
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}

void zzamrec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "짬뽕");


	fp = fopen("zzamrec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
		getchar();
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}

void zzaprec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "잡채밥");


	fp = fopen("zzamrec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		if (i == 1) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 40;
			printf("\n****엔터를 쳐주세유, 시간 재드려유****\n");
			getchar();
			while (time > 0) {
				printf("%d 분 남았어유~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
			continue;
		}
		if (i == 6) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 2;
			printf("\n****엔터를 쳐주세유, 시간 재드려유****\n");
			getchar();
			while (time > 0) {
				printf("%d 분 남았어유~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
			continue;
		}
		else {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);


			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
		}
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}

void zzarec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "짜장면");


	fp = fopen("zzarec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		if (i == 2) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 15;
			printf("\n****엔터를 쳐주세유, 시간 재드려유****\n");
			getchar();
			while (time > 0) {
				printf("%d 분 남았어유~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
			continue;
		}
		else {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);


			printf("\n**넘어가려면 엔터를 쳐주세유~**\n");
			getchar();
		}
	}
	printf("\n\n #####완성됐어유^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. 타이틀로 돌아가기 2. 프로그램 종료");


	while (1) {
		scanf("%d", &select);
		if (select == 1) {
			main();
			break;
		}
		else if (select == 2) {
			exit(1);
		}
		else {
			printf("잘못 입력하셨습니다. 다시 입력하세요. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}