#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<time.h>

void main() {
	FILE *fp;
	char a[200][50];
	int time = 0;
	int next = 1;
	int select;




	fp = fopen("bookrec.txt", "r");


	if (fp == NULL) {
		printf("error");
		exit(1);
	}


	for (int i = 0; !feof(fp); i++) {
		if (i == 9) {
			fgets(a[i], 200, fp);
			printf("%s\n", a[i]);

			time = 1;
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
	printf("\n\n 완성됐어유~\n");



	
	fclose(fp);

}