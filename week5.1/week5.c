#include <stdio.h>

main() {
	int ins_money;
	
	int mountaindew = 900, pokari = 1100, dezawa = 800, cola = 1100, beer = 2500;
	
	int mtd_stock = 20, pokari_stock = 15, dezawa_stock = 10, cola_stock = 2, beer_stock = 0;
	
	int menu;
	printf("������ �ݾ��� �Է� : ");
	scanf_s("%d", &ins_money);

	printf(" 1.monutaindew : 900�� \n 2.pokari : 1100��\n 3.dezawa : 800��\n 4.cola : 1100�� \n 5.beer : 2500��\n");
	printf("���� ������� �����ϼ��� : \n");
	scanf_s("%d", &menu);

	switch (menu){
		case 1:
			if (ins_money < 900) {
				printf("�ݾ��� �����մϴ�.");
				break;
			}
			else if (ins_money >= 900) {
				if (mtd_stock == 0) {
					printf("�˼��մϴ�. ��� �����ϴ�.");
					break;
				}
				printf("mountaindew �� ���Խ��ϴ�. ���� Ȯ���� �ּ���.\n", mountaindew);
				printf("�Ž����� : %d �� �Դϴ�.\n", ins_money - mountaindew);
				printf("���� ���� %d�� �Դϴ�.\n", mtd_stock - 1);
				break;
			}
		case 2:
			if (ins_money < pokari) {
				printf("�ݾ��� �����մϴ�.");
				break;
			}
			else if (ins_money >= pokari) {
				if (pokari_stock == 0) {
					printf("�˼��մϴ�. ��� �����ϴ�.");
					break;
				}

				printf("pokari �� ���Խ��ϴ�. ���� Ȯ���� �ּ���.\n", pokari);
				printf("�Ž����� : %d �� �Դϴ�.\n", ins_money - pokari);
				printf("���� ���� %d�� �Դϴ�.\n", pokari_stock - 1);
				break;
			}
		case 3:
			if (ins_money < dezawa) {
				printf("�ݾ��� �����մϴ�.");
				break;
			}
			else if (ins_money >= dezawa) {
				if (dezawa_stock == 0) {
					printf("�˼��մϴ�. ��� �����ϴ�.");
					break;
				}
				printf("dezawa �� ���Խ��ϴ�. ���� Ȯ���� �ּ���.\n", dezawa);
				printf("�Ž����� : %d �� �Դϴ�.\n", ins_money - dezawa);
				printf("���� ���� %d�� �Դϴ�.\n", dezawa_stock - 1);
				if (dezawa_stock == 0) {
					printf("�˼��մϴ�. ��� �����ϴ�.");
				}
				break;
			}
		case 4:
			if (ins_money < cola) {
				printf("�ݾ��� �����մϴ�.");
				break;
			}
			else if (ins_money >= cola) {
				if (cola_stock == 0) {
					printf("�˼��մϴ�. ��� �����ϴ�.");
					break;
				}
				printf("cola �� ���Խ��ϴ�.���� Ȯ���� �ּ���.\n", cola);
				printf("�Ž����� : %d �� �Դϴ�.\n", ins_money - cola);
				printf("���� ���� %d�� �Դϴ�.\n", cola_stock - 1);
				break;
			}
		case 5:
			if (ins_money < beer) {
				printf("�ݾ��� �����մϴ�.");
				break;
			}
			else if (ins_money >= beer) {
				if (beer_stock == 0) {
					printf("�˼��մϴ�. ��� �����ϴ�.");
					break;
				}
				printf("beer �� ���Խ��ϴ�. ���� Ȯ���� �ּ���.\n", beer);
				printf("�Ž����� : %d �� �Դϴ�.\n", ins_money - beer);
				printf("���� ���� %d�� �Դϴ�.\n", beer_stock - 1);

				break;
			}
		default:
			printf("�߸��� �����Դϴ�.");
			break;
				}
}