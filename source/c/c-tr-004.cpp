#include <iostream>
#pragma warning(disable:4996)

int main() {
	int i, money = 0, temp = 0;
	printf("----- Menu -----\n1.입금\n2.출금\n3.잔액\n4.메뉴\n5.종료\n");
	while (true)
	{
		printf("mode> ");
		scanf("%d", &i);

		switch (i) 
		{
		case 1:
			printf("입금할 금액> ");
			scanf("%d", &temp);
			money = money + temp;
			temp = 0;
			break;
		case 2:
			printf("출금할 금액> ");
			scanf("%d", &temp);
			money = money - temp;
			temp = 0;
			break;
		case 3:
			printf("잔액은 %d원입니다.\n", money);
			break;
		case 4:
			printf("----- Menu -----\n1.입금\n2.출금\n3.잔액\n4.메뉴\n5.종료\n");
			break;
		case 5:
			return 0;
		default:
			printf("잘못입력하셨습니다.\n");
			break;
		}
	}
	
}