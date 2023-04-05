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
	printf("5를 곱한 값은 %d이다.\n", x);
}

func2(int x, int y)
{
	int	breadth = x * y;
	printf("직사각형의 가로가 %d, 세로가 %d 일 때, 넓이는 %d이다.", x, y, breadth);

}

