#include <stdio.h>

func1(int x);
func2(int x, int y);
main() {
	int a = 10, b = 20, c = 30;
	int breadth;
	func1(a);
	func2(b, c);
}

func1(int x) {
	x = x * 5;
	printf("5�� ���� ���� %d�̴�.\n", x);
}

func2(int x, int y)
{
	int	breadth = x * y;
	printf("���簢���� ���ΰ� %d, ���ΰ� %d �� ��, ���̴� %d�̴�.", x, y, breadth);

}

