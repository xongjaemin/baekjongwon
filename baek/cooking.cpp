#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<time.h>


void main() {
	FILE *fp;
	char a[200][50];
	int time=0;
	int next=1;

	fp = fopen("curry.txt", "r");


		fgets(a[0], 200, fp);
		printf("%s\n", a[0]);

		time = 10;
	while (time > 0) {
			printf("%d �� ���Ҿ���~ \n", time);
			Sleep(1000);
			time--;
		}
		printf("\n�Ѿ���� ���͸� ���ּ���~\n");
		getchar();




	fgets(a[1], 200, fp);
	printf("%s\n", a[1]);
}