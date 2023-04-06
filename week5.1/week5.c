#include <stdio.h>

main() {
	int ins_money;
	
	int mountaindew = 900, pokari = 1100, dezawa = 800, cola = 1100, beer = 2500;
	
	int mtd_stock = 20, pokari_stock = 15, dezawa_stock = 10, cola_stock = 2, beer_stock = 0;
	
	int menu;
	printf("투입할 금액을 입력 : ");
	scanf_s("%d", &ins_money);

	printf(" 1.monutaindew : 900원 \n 2.pokari : 1100원\n 3.dezawa : 800원\n 4.cola : 1100원 \n 5.beer : 2500원\n");
	printf("마실 음료수를 선택하세요 : \n");
	scanf_s("%d", &menu);

	switch (menu){
		case 1:
			if (ins_money < 900) {
				printf("금액이 부족합니다.");
				break;
			}
			else if (ins_money >= 900) {
				if (mtd_stock == 0) {
					printf("죄송합니다. 재고가 없습니다.");
					break;
				}
				printf("mountaindew 가 나왔습니다. 밑을 확인해 주세요.\n", mountaindew);
				printf("거스름돈 : %d 원 입니다.\n", ins_money - mountaindew);
				printf("남은 재고는 %d개 입니다.\n", mtd_stock - 1);
				break;
			}
		case 2:
			if (ins_money < pokari) {
				printf("금액이 부족합니다.");
				break;
			}
			else if (ins_money >= pokari) {
				if (pokari_stock == 0) {
					printf("죄송합니다. 재고가 없습니다.");
					break;
				}

				printf("pokari 가 나왔습니다. 밑을 확인해 주세요.\n", pokari);
				printf("거스름돈 : %d 원 입니다.\n", ins_money - pokari);
				printf("남은 재고는 %d개 입니다.\n", pokari_stock - 1);
				break;
			}
		case 3:
			if (ins_money < dezawa) {
				printf("금액이 부족합니다.");
				break;
			}
			else if (ins_money >= dezawa) {
				if (dezawa_stock == 0) {
					printf("죄송합니다. 재고가 없습니다.");
					break;
				}
				printf("dezawa 가 나왔습니다. 밑을 확인해 주세요.\n", dezawa);
				printf("거스름돈 : %d 원 입니다.\n", ins_money - dezawa);
				printf("남은 재고는 %d개 입니다.\n", dezawa_stock - 1);
				if (dezawa_stock == 0) {
					printf("죄송합니다. 재고가 없습니다.");
				}
				break;
			}
		case 4:
			if (ins_money < cola) {
				printf("금액이 부족합니다.");
				break;
			}
			else if (ins_money >= cola) {
				if (cola_stock == 0) {
					printf("죄송합니다. 재고가 없습니다.");
					break;
				}
				printf("cola 가 나왔습니다.밑을 확인해 주세요.\n", cola);
				printf("거스름돈 : %d 원 입니다.\n", ins_money - cola);
				printf("남은 재고는 %d개 입니다.\n", cola_stock - 1);
				break;
			}
		case 5:
			if (ins_money < beer) {
				printf("금액이 부족합니다.");
				break;
			}
			else if (ins_money >= beer) {
				if (beer_stock == 0) {
					printf("죄송합니다. 재고가 없습니다.");
					break;
				}
				printf("beer 가 나왔습니다. 밑을 확인해 주세요.\n", beer);
				printf("거스름돈 : %d 원 입니다.\n", ins_money - beer);
				printf("남은 재고는 %d개 입니다.\n", beer_stock - 1);

				break;
			}
		default:
			printf("잘못된 숫자입니다.");
			break;
				}
}