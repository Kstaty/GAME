#include <iostream>
using namespace std;
bool GAME(int a, int b, int c, int d, int a1, int b1, int c1, int d1) {
	if (a == a1 && b == b1 && c == c1 && d == d1)
		return 1;
	if (a1 == b || a1 == c || a1 == d)
		cout << "Цифра " << a1 << " есть в загаданном числе, но стоит в другом месте" << endl;
	if (b1 == a || b1 == c || b1 == d)
		cout << "Цифра " << b1 << " есть в загаданном числе, но стоит в другом месте" << endl;
	if (c1 == a || c1 == b || c1 == d)
		cout << "Цифра " << c1 << " есть в загаданном числе, но стоит в другом месте" << endl;
	if (d1 == a || d1 == b || d1 == c)
		cout << "Цифра " << d1 << " есть в загаданном числе, но стоит в другом месте" << endl;
	if (a == a1)
		cout << "Первая цифра верна" << endl;
	if (b == b1)
		cout << "Вторая цифрва верна" << endl;
	if (c == c1)
		cout << "Третья цифра верна" << endl;
	if (d == d1)
		cout << "Четвертая цифра верна" << endl;
	int n1;
	cout << "Попробуйте ввести число еще раз: ";
	cin >> n1;
	d1 = n1 % 10;
	c1 = (n1 / 10) % 10;
	b1 = (n1 / 100) % 10;
	a1 = n1 / 1000;
	GAME(a, b, c, d, a1, b1, c1, d1);

}
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int n = rand() % (10000 - 1000) + 1000;
	cout << "Введите загаданное мной четырехзначное число: ";
	int n1;
	cin >> n1;
	int a, b, c, d, a1, b1, c1, d1;
	d = n % 10;
	c = (n / 10) % 10;
	b = (n / 100) % 10;
	a = n / 1000;
	//cout << a << b << c << d << " " << n << endl;
	d1 = n1 % 10;
	c1 = (n1 / 10) % 10;
	b1 = (n1 / 100) % 10;
	a1 = n1 / 1000;
	//cout << a1 << b1 << c1 << d1 << " " << n1 << endl;
	GAME(a, b, c, d, a1, b1, c1, d1);
	cout << "Ура!!! Победа, число угадано!!!";

	return 0;
}