#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int printNum(int num) {
	if (num <= 0) return 1;
	printf("----------------%d----------------\n\n", num);
	Sleep(1000);
	return printNum(num - 1);
}

int main()
{
	srand(time(NULL));
	int random = 0;
	random = rand() % 101;
	
	int plNum;
	printf("---------------------------------\n");
	printf("    UpDown������ �����մϴ�.\n");
	printf("---------------------------------\n");
	Sleep(1000);
	printf("    �� 5���� ��ȸ�� �ֽ��ϴ�.\n");
	printf("---------------------------------\n");
	Sleep(1000);
	printf("     3�ʵ� ���ڰ� �������ϴ�\n");
	printf("---------------------------------\n\n");
	Sleep(1000);
	printNum(3);
	printf("       ���ڰ� ���������ϴ�.\n");
	printf("---------------------------------\n");
	Sleep(1000);
	for (int i = 0; i < 5; i++) {
		printf("���ڸ� �����ּ���.\n");
		printf("�Է�:");
		scanf("%d", &plNum);
		if (plNum > random) {
			printf("Down\n");

		}
		else if (plNum < random) {
			printf("Up\n");
		}
		else if (plNum == random) {
			printf("---------------------------------\n");
			printf("             ����!!\n");
			printf("---------------------------------\n");
			break;
		}
		if (i == 4) {
			printf("---------------------------------\n");
			printf("          ���ФФФ�\n");
			printf("---------------------------------\n");
		}
	}
	return 0;
}