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
	printf("    UpDown게임을 시작합니다.\n");
	printf("---------------------------------\n");
	Sleep(1000);
	printf("    총 5번의 기회가 있습니다.\n");
	printf("---------------------------------\n");
	Sleep(1000);
	printf("     3초뒤 숫자가 정해집니다\n");
	printf("---------------------------------\n\n");
	Sleep(1000);
	printNum(3);
	printf("       숫자가 정해졌습니다.\n");
	printf("---------------------------------\n");
	Sleep(1000);
	for (int i = 0; i < 5; i++) {
		printf("숫자를 적어주세요.\n");
		printf("입력:");
		scanf("%d", &plNum);
		if (plNum > random) {
			printf("Down\n");

		}
		else if (plNum < random) {
			printf("Up\n");
		}
		else if (plNum == random) {
			printf("---------------------------------\n");
			printf("             정답!!\n");
			printf("---------------------------------\n");
			break;
		}
		if (i == 4) {
			printf("---------------------------------\n");
			printf("          실패ㅠㅠㅠ\n");
			printf("---------------------------------\n");
		}
	}
	return 0;
}