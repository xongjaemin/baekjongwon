#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>

#pragma comment(lib, "winmm.lib")


// �丮���α׷�, ��õ���α׷�, ��� ���α׷�
void cook();
void what();
void record();

// �丮 ���

//**�ѽ�**

//��ġ� 
void kim();
void kimrec();
//�ع�����
void hae();
void haerec();
//ī�����̽�
void ca();
void carec();
//�ߺ�����
void dac();
void dacrec();
//������ ���Ժ�����
void gocu();
void gocurec();
//�߰��� ��ġ����
void jam();
void jamrec();
//�Ͼ
void book();
void bookrec();
//����� ��ħ
void goal();
void goalrec();
//���еη�ġ��
void dae();
void daerec();
//��ġ����
void jan();
void janrec();
//�������� ��¡��
void han();
void hanrec();
//�����
void sam();
void samrec();
//��������
void nac();
void nacrec();
//������
void uk();
void ukrec();

//**���**

//�Ƕ�� ����
void ddo();
void ddorec();
//���� ũ�� ������
void shrimp();
void shrimprec();
//�������
void cca();
void ccarec();
//�丶�� ���İ�Ƽ
void to();
void torec();
//����
void pork();
void porkrec();
//��ȣ�� ����
void dan();
void danrec();

//**�߽�**

//�����쵿
void bwoo();
void bwoorec();
//¥���
void zza();
void zzarec();
//��ä��
void zzap();
void zzaprec();
//«��
void zzam();
void zzamrec();
//������
void tang();
void tangrec();
//���ĵκ�
void map();
void maprec();

//**�Ͻ�**

//���
void donca();
void doncarec();
//���ڳ�̾߳�
void occ();
void occrec();
//���������
void donco();
void doncorec();
//�޹мҹ�
void mee();
void meerec();
//ġŲ����
void chic();
void chicrec();
//��쵿
void mook();
void mookrec();


//���� �޴� ����� ����ü
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

	//������ ��Ҹ� ���
	PlaySound(TEXT("baek.wav"), NULL, SND_SYNC);


	int k;
	printf("\n\n\n******** �ȳ��ϼ��� �ݰ�����! *********");
	printf("\n\1. �丮�غ�����? \n2. �޴� �����ұ���? \n3. �丮�� �͵� ��� ���� \n4. ���α׷� ������\n\n");

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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
	}

	return 0;
}
//��� ���� ���� �Լ�
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
//�丮 ���� �Լ� 
void cook() {

	int c, k;
	//�ѽ�, ���, �߽�, �Ͻ� �� ���� ����
	printf("\n� ������ ������ �������? \n\n1. �ѽ�(14����) \n 2. ���(6����) \n 3. �߽�(6����) \n 4.�Ͻ�(6����) \n");

	while (1) {
		scanf("%d", &c);
		if (c == 1) {
			printf("�ѽ� �޴� �����帱����? (�������ּ���)\n");
			getchar();
			printf("1. ��ġ�\n");
			printf("2. �ع�����\n");
			printf("3. ī�����̽�\n");
			printf("4. �ߺ�����\n");
			printf("5. ������ ���Ժ�����\n");
			printf("6. �߰��� ��ġ����\n");
			printf("7. �Ͼ\n");
			printf("8. ����� ��ħ\n");
			printf("9. ���еη�ġ��\n");
			printf("10. ��ġ����\n");
			printf("11. �������� ��¡��\n");
			printf("12. �����\n");
			printf("13. ��������\n");
			printf("14. ������\n");

			printf("\n\n����� �������? : ");

			//�޴� �����ϸ� �� �޴� �Լ��� �Ѿ
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
					printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
			}
			break;
		}
		else if (c == 2) {
			printf("��� �޴� �����帱����? (�������ּ���) \n");
			getchar();
			printf("1. �Ƕ�� ����\n");
			printf("2. ���� ũ�� ������\n");
			printf("3. �������\n");
			printf("4. �丶�� ���İ�Ƽ\n");
			printf("5. ����\n");
			printf("6. ��ȣ�� ����\n");

			printf("\n\n����� �������? : ");

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
					printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
			}

			break;
		}
		else if (c == 3) {
			printf("�߽� �޴� �����帱����? (�������ּ���) \n");
			getchar();
			printf("1. �����쵿\n");
			printf("2. ¥���\n");
			printf("3. ��ä��\n");
			printf("4. «��\n");
			printf("5. ������\n");
			printf("6. ���ĵκ�\n");

			printf("\n\n����� �������? : ");

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
					printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
			}
			break;
		}
		else if (c == 4) {
			printf("�Ͻ� �޴� �����帱����? (�������ּ���) \n");
			getchar();
			printf("1. ���\n");
			printf("2. ���ڳ�̾߳�\n");
			printf("3. ���������\n");
			printf("4. �޹мҹ�\n");
			printf("5. ġŲ����\n");
			printf("6. ��쵿\n");

			printf("\n\n����� �������? : ");

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
					printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
			}
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");

	}







}
//���� ��ʸ�Ʈ �Լ�, 32������ �����Ѵ�
void what() {
	char food[32][30] = { "�丶�� ���İ�Ƽ", "��ġ�", "�ع�����", "ī�����̽�", "�ߺ�����","������ ���Ժ�����",
		"�߰��� ��ġ����","�Ͼ", "����� ��ħ","�����쵿","¥���", "��ä��", "«��", "������", "�Ƕ�� ����", "���� ũ�� ������","���","���еη�ġ��",
		"���ڳ�̾߳�",  "���������", "�޹� �ҹ�", "�������", "��ġ����", "�������� ��¡��", "����", "�����", "��ȣ�� ����", "���ĵκ�","ġŲ����","��������",
		"������", "��쵿" };
	char select1[16][30];
	char select2[8][30];
	char select3[4][30];
	char select4[2][30];
	char win[30];
	int sel;
	printf("\n\n\n----------32��-----------\n\n\n");

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
				printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
				continue;
			}
		}



		printf("%s�� �����ϼ̽��ϴ�\n\n", select1[i]);
		printf("------------------------\n\n");
	}

	printf("\n\n\n----------16��-----------\n\n\n");

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
				printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
				continue;
			}
		}



		printf("%s�� �����ϼ̽��ϴ�\n\n", select2[i]);
		printf("------------------------\n\n");
	}

	printf("\n\n\n--------- 8��-----------\n\n\n");

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
				printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
				continue;
			}
		}

		printf("%s�� �����ϼ̽��ϴ�\n\n", select3[i]);
		printf("------------------------\n\n");
	}


	printf("\n\n\n-------------4��-------------\n\n\n");

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
				printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
				continue;
			}


			printf("%s�� �����ϼ̽��ϴ�\n\n", select4[i]);
			printf("------------------------\n\n");
		}
	}
	printf("\n\n\n-------------���-------------\n\n\n");

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
				printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
				continue;
			}

		}


	}

	printf("������ �ʷ� ���ߴ� : ");
	puts(win);

	int j = 0, select;

	//���� �޴��� ����� �� �� �ְ� ��
	printf("\n���� ����� ������??");
	printf("1. �� 2. �ƴϿ�\n");
	scanf("%d", &j);

	while (1) {

		if (j == 1) {
			if (!strcmp(win, "��ġ�")) {
				kim();
				break;
			}
			else 	if (!strcmp(win, "�ع�����")) {
				hae();
				break;
			}
			else 	if (!strcmp(win, "ī�����̽�")) {
				ca();
				break;
			}
			else 	if (!strcmp(win, "�ߺ�����")) {
				dac();
				break;
			}
			else 	if (!strcmp(win, "������ ���Ժ�����")) {
				gocu();
				break;
			}
			else 	if (!strcmp(win, "�߰��� ��ġ����")) {
				jam();
				break;
			}
			else 	if (!strcmp(win, "�Ͼ")) {
				book();
				break;
			}
			else 	if (!strcmp(win, "����� ��ħ")) {
				goal();
				break;
			}
			else 	if (!strcmp(win, "���еη�ġ��")) {
				dae();
				break;
			}
			else 	if (!strcmp(win, "��ġ����")) {
				jan();
				break;
			}
			else 	if (!strcmp(win, "�������� ��¡��")) {
				han();
				break;
			}
			else 	if (!strcmp(win, "�����")) {
				sam();
				break;
			}
			else 	if (!strcmp(win, "��������")) {
				nac();
				break;
			}
			else 	if (!strcmp(win, "������")) {
				uk();
				break;
			}
			else 	if (!strcmp(win, "�Ƕ�� ����")) {
				ddo();
				break;
			}
			else 	if (!strcmp(win, "���� ũ�� ������")) {
				shrimp();
				break;
			}
			else 	if (!strcmp(win, "�������")) {
				cca();
				break;
			}
			else 	if (!strcmp(win, "�丶�� ���İ�Ƽ")) {
				to();
				break;
			}
			else 	if (!strcmp(win, "����")) {
				pork();
				break;
			}
			else 	if (!strcmp(win, "��ȣ�� ����")) {
				dan();
				break;
			}
			else 	if (!strcmp(win, "�����쵿")) {
				bwoo();
				break;
			}
			else 	if (!strcmp(win, "¥���")) {
				zza();
				break;
			}
			else 	if (!strcmp(win, "��ä��")) {
				zzap();
				break;
			}
			else 	if (!strcmp(win, "������")) {
				tang();
				break;
			}
			else 	if (!strcmp(win, "���ĵκ�")) {
				map();
				break;
			}
			else 	if (!strcmp(win, "���")) {
				donca();
				break;
			}
			else 	if (!strcmp(win, "���ڳ�̾߳�")) {
				occ();
				break;
			}
			else 	if (!strcmp(win, "���������")) {
				donco();
				break;
			}
			else 	if (!strcmp(win, "�޹мҹ�")) {
				mee();
				break;
			}
			else 	if (!strcmp(win, "ġŲ����")) {
				chic();
				break;
			}
			else 	if (!strcmp(win, "��쵿")) {
				mook();
				break;
			}

		}
		else if (j == 2) {
			printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
					printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
				}
			}
			break;
		}
		else {
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
		}
	}

}

//���� �Լ���
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			kimrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			haerec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			carec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			dacrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			gocurec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			jamrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			bookrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			goalrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			daerec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			janrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			hanrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			samrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			nacrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			ukrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			ddorec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			shrimprec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			ccarec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			torec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			porkrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			danrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			bwoorec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			zzarec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			zzaprec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			zzamrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			tangrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			maprec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			doncarec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			occrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			doncorec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			meerec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			chicrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
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
	printf("��ᰡ �غ�Ǽ̳���? �丮�� �����ұ���?\n");
	printf("1. ��\t2. �ٸ� �丮 ����\n");

	while (1) {
		scanf("%d", &j);

		if (j == 1) {
			printf("�丮�� ��������. �����Ǹ� �� ���� ���������! \n");
			mookrec();
			break;
		}
		else if (j == 2) {
			cook();
			break;
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n");
	}

}

// ���� ��� �Լ���
void kimrec() {
	FILE *fp, *fp2;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;

	struct record b;

	strcpy(b.food, "��ġ�");


	fp = fopen("kimrec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
		getchar();
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);

	//printf("\n%s \t %s\n", b.food, b.date);

	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "�Ͼ");


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
			printf("\n****���͸� ���ּ���, �ð� ������****\n");
			getchar();
			while (time > 0) {
				printf("%d �� ���Ҿ���~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
			continue;
		}
		else {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);


			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
		}
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "�����쵿");


	fp = fopen("bwoorec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
		getchar();
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "ī�����̽�");


	fp = fopen("carec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
		getchar();
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "�������");


	fp = fopen("ccarec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
		getchar();
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "ġŲ����");


	fp = fopen("chicrec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
		getchar();
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "�ߺ�����");


	fp = fopen("dacrec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
		getchar();
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "���еη�ġ��");


	fp = fopen("dacrec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
		getchar();
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "��ȣ������");


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
			printf("\n****���͸� ���ּ���, �ð� ������****\n");
			getchar();
			while (time > 0) {
				printf("%d �� ���Ҿ���~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
			continue;
		}
		else if (i == 7) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 40;
			printf("\n****���͸� ���ּ���, �ð� ������****\n");
			getchar();
			while (time > 0) {
				printf("%d �� ���Ҿ���~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
			continue;
		}
		else {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);


			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
		}
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "�Ƕ�� ����");


	fp = fopen("ddorec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
		getchar();
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "���");


	fp = fopen("doncarec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
		getchar();
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "���������");


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
			printf("\n****���͸� ���ּ���, �ð� ������****\n");
			getchar();
			while (time > 0) {
				printf("%d �� ���Ҿ���~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
			continue;
		}
		else if (i == 5) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 5;
			printf("\n****���͸� ���ּ���, �ð� ������****\n");
			getchar();
			while (time > 0) {
				printf("%d �� ���Ҿ���~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
			continue;
		}
		else {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);


			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
		}
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "����� ��ħ");


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
			printf("\n****���͸� ���ּ���, �ð� ������****\n");
			getchar();
			while (time > 0) {
				printf("%d �� ���Ҿ���~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
			continue;
		}

		else {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);


			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
		}
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "������ ���Ժ�����");


	fp = fopen("gocurec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
		getchar();
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "�ع�����");


	fp = fopen("haerec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
		getchar();
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "�������� ��¡��");


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
			printf("\n****���͸� ���ּ���, �ð� ������****\n");
			getchar();
			while (time > 0) {
				printf("%d �� ���Ҿ���~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
			continue;
		}

		else {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);


			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
		}
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "�߰��� ��ġ����");


	fp = fopen("jamrec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
		getchar();
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "��ġ����");


	fp = fopen("janrec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
		getchar();
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "���ĵκ�");


	fp = fopen("maprec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
		getchar();
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "�޹мҹ�");


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
			printf("\n****���͸� ���ּ���, �ð� ������****\n");
			getchar();
			while (time > 0) {
				printf("%d �� ���Ҿ���~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
			continue;
		}
		if (i == 3) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 10;
			printf("\n****���͸� ���ּ���, �ð� ������****\n");
			getchar();
			while (time > 0) {
				printf("%d �� ���Ҿ���~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
			continue;
		}
		else {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);


			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
		}
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "��쵿");


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
			printf("\n****���͸� ���ּ���, �ð� ������****\n");
			getchar();
			while (time > 0) {
				printf("%d �� ���Ҿ���~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
			continue;
		}
		else {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);


			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
		}
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "��������");


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
			printf("\n****���͸� ���ּ���, �ð� ������****\n");
			getchar();
			while (time > 0) {
				printf("%d �� ���Ҿ���~ \n", time);
				Sleep(1000);
				time--;
			}
			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
			continue;
		}
		if (i == 4) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 60;
			printf("\n****���͸� ���ּ���, �ð� ������****\n");
			getchar();
			while (time > 0) {
				printf("%d �� ���Ҿ���~ \n", time);
				Sleep(1000);
				time--;
			}
			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
			continue;
		}
		else {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);


			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
		}
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "���ڳ�̾�Ű");


	fp = fopen("occrec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
		getchar();
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "����");


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
			printf("\n****���͸� ���ּ���, �ð� ������****\n");
			getchar();
			while (time > 0) {
				printf("%d �ð� ���Ҿ���~ \n", time);
				Sleep(100000);
				time--;
			}
			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
			continue;
		}
		if (i == 4) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 15;
			printf("\n****���͸� ���ּ���, �ð� ������****\n");
			getchar();
			while (time > 0) {
				printf("%d �� ���Ҿ���~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
			continue;
		}
		if (i == 7) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 10;
			printf("\n****���͸� ���ּ���, �ð� ������****\n");
			getchar();
			while (time > 0) {
				printf("%d �� ���Ҿ���~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
			continue;
		}
		if (i == 8) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 10;
			printf("\n****���͸� ���ּ���, �ð� ������****\n");
			getchar();
			while (time > 0) {
				printf("%d �� ���Ҿ���~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
			continue;
		}
		else {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);


			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
		}
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "�����");


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
			printf("\n****���͸� ���ּ���, �ð� ������****\n");
			getchar();
			while (time > 0) {
				printf("%d �� ���Ҿ���~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
			continue;
		}
		else {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);


			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
		}
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "���� ũ�� ������");


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
			printf("\n****���͸� ���ּ���, �ð� ������****\n");
			getchar();
			while (time > 0) {
				printf("%d �� ���Ҿ���~ \n", time);
				Sleep(1000);
				time--;
			}
			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
			continue;
		}
		if (i == 8) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 3;
			printf("\n****���͸� ���ּ���, �ð� ������****\n");
			getchar();
			while (time > 0) {
				printf("%d �� ���Ҿ���~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
			continue;
		}
		else {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);


			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
		}
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "������");


	fp = fopen("tangrec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
		getchar();
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "�丶�� ���İ�Ƽ");


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
			printf("\n****���͸� ���ּ���, �ð� ������****\n");
			getchar();
			while (time > 0) {
				printf("%d �� ���Ҿ���~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
			continue;
		}
		if (i == 7) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 3;
			printf("\n****���͸� ���ּ���, �ð� ������****\n");
			getchar();
			while (time > 0) {
				printf("%d �� ���Ҿ���~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
			continue;
		}
		else {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);


			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
		}
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "������");


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
			printf("\n****���͸� ���ּ���, �ð� ������****\n");
			getchar();
			while (time > 0) {
				printf("%d �� ���Ҿ���~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
			continue;
		}
		if (i == 4) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 2;
			printf("\n****���͸� ���ּ���, �ð� ������****\n");
			getchar();
			while (time > 0) {
				printf("%d �ð� ���Ҿ���~ \n", time);
				Sleep(100000);
				time--;
			}
			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
			continue;
		}
		if (i == 7) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 60;
			printf("\n****���͸� ���ּ���, �ð� ������****\n");
			getchar();
			while (time > 0) {
				printf("%d �� ���Ҿ���~ \n", time);
				Sleep(1000);
				time--;
			}
			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
			continue;
		}
		if (i == 11) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 5;
			printf("\n****���͸� ���ּ���, �ð� ������****\n");
			getchar();
			while (time > 0) {
				printf("%d �� ���Ҿ���~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
			continue;
		}
		if (i == 13) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 10;
			printf("\n****���͸� ���ּ���, �ð� ������****\n");
			getchar();
			while (time > 0) {
				printf("%d �� ���Ҿ���~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
			continue;
		}
		else {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);


			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
		}
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "«��");


	fp = fopen("zzamrec.txt", "r");
	fp2 = fopen("record.txt", "a");

	if (fp == NULL || fp2 == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		fgets(a[i], 200, fp);
		printf("%s\n", a[i]);


		printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
		getchar();
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "��ä��");


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
			printf("\n****���͸� ���ּ���, �ð� ������****\n");
			getchar();
			while (time > 0) {
				printf("%d �� ���Ҿ���~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
			continue;
		}
		if (i == 6) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 2;
			printf("\n****���͸� ���ּ���, �ð� ������****\n");
			getchar();
			while (time > 0) {
				printf("%d �� ���Ҿ���~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
			continue;
		}
		else {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);


			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
		}
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
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

	strcpy(b.food, "¥���");


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
			printf("\n****���͸� ���ּ���, �ð� ������****\n");
			getchar();
			while (time > 0) {
				printf("%d �� ���Ҿ���~ \n", time);
				Sleep(10000);
				time--;
			}
			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
			continue;
		}
		else {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);


			printf("\n**�Ѿ���� ���͸� ���ּ���~**\n");
			getchar();
		}
	}
	printf("\n\n #####�ϼ��ƾ���^^#####\n");
	strcpy(b.date, __DATE__);


	fprintf(fp2, "\n%s \t %s\n", b.food, b.date);

	printf("1. Ÿ��Ʋ�� ���ư��� 2. ���α׷� ����");


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
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���. \n");
		}
	}

	fclose(fp);
	fclose(fp2);
}