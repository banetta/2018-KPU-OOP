#include <iostream>
#pragma warning(disable:4996)

int main() {
	int i, money = 0, temp = 0;
	printf("----- Menu -----\n1.�Ա�\n2.���\n3.�ܾ�\n4.�޴�\n5.����\n");
	while (true)
	{
		printf("mode> ");
		scanf("%d", &i);

		switch (i) 
		{
		case 1:
			printf("�Ա��� �ݾ�> ");
			scanf("%d", &temp);
			money = money + temp;
			temp = 0;
			break;
		case 2:
			printf("����� �ݾ�> ");
			scanf("%d", &temp);
			money = money - temp;
			temp = 0;
			break;
		case 3:
			printf("�ܾ��� %d���Դϴ�.\n", money);
			break;
		case 4:
			printf("----- Menu -----\n1.�Ա�\n2.���\n3.�ܾ�\n4.�޴�\n5.����\n");
			break;
		case 5:
			return 0;
		default:
			printf("�߸��Է��ϼ̽��ϴ�.\n");
			break;
		}
	}
	
}