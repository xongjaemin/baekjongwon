#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main() {
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
	}
