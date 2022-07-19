// Karpovich_3lab.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//1 zadanie
//#include <iostream>
//#include <iomanip> 
//using namespace std;
//void main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	int t;
//	cout << "Введите t=";
//	cin >> t;
//	cout << "t=" << t << endl;
//	cout << "Тип Размер в байтах" << endl;
//	cout << "int: " << sizeof(int) << endl;
//	cout << "char: " << sizeof(char) << endl;
//	cout << "float: " << sizeof(float) << endl;
//	cout << "double: " << sizeof(double) << endl;
//}

//zadanie2

//#include <iomanip> 
//#include <iostream>
//using namespace std;
//void main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	char c, probel; probel = ' ';
//	cout << "Введите символ "; cin >> c;
//	cout << setw(35) << setfill(probel) << probel;
//	cout << setw(10) << setfill(c) << c << endl;
//	cout << setw(34) << setfill(probel) << probel;
//	cout << setw(12) << setfill(c) << c << endl;
//	cout << setw(33) << setfill(probel) << probel;
//	cout << setw(14) << setfill(c) << c << endl;
//}

//zadanie3

//#include <stdio.h>
//#include <conio.h>
//void main()
//{
//	printf("\n\t Privet\n");
//	printf("\n... Press key");
//	_getch();
//}

//zadanie5
//#include <iostream>
//#include <windows.h>
//void main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	char name[60];
//	puts("Как вас зовут? ");
//	gets_s(name);
//	printf("Привет, %s\n", name);
//}


//zadanie6

#include <iostream>
#include <iomanip> 
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	char a, b;
	b = ' ';
	cout << "Введите символ ";
	cin >> a;
	cout << setw(35) << setfill(b) << b;
	cout << setw(1) << setfill(a) << a << endl;
	cout << setw(34) << setfill(b) << b;
	cout << setw(3) << setfill(a) << a << endl;
	cout << setw(33) << setfill(b) << b;
	cout << setw(5) << setfill(a) << a << endl;
	cout << setw(33) << setfill(b) << b;
	cout << setw(5) << setfill(a) << a << endl;
	cout << setw(32) << setfill(b) << b;
	cout << setw(7) << setfill(a) << a << endl;
	cout << setw(32) << setfill(b) << b;
	cout << setw(7) << setfill(a) << a << endl;
	cout << setw(26) << setfill(b) << b;
	cout << setw(19) << setfill(a) << a << endl;
	cout << setw(26) << setfill(b) << b;
	cout << setw(19) << setfill(a) << a << endl;
	cout << setw(27) << setfill(b) << b;
	cout << setw(17) << setfill(a) << a << endl;
	cout << setw(28) << setfill(b) << b;
	cout << setw(15) << setfill(a) << a << endl;
	cout << setw(29) << setfill(b) << b;
	cout << setw(13) << setfill(a) << a << endl;
	cout << setw(30) << setfill(b) << b;
	cout << setw(11) << setfill(a) << a << endl;
	cout << setw(30) << setfill(b) << b;
	cout << setw(11) << setfill(a) << a << endl;
	cout << setw(29) << setfill(b) << b;
	cout << setw(13) << setfill(a) << a << endl;
	cout << setw(29) << setfill(b) << b;
	cout << setw(13) << setfill(a) << a << endl;
	cout << setw(28) << setfill(b) << b;
	cout << setw(6) << setfill(a) << a;
	cout << setw(3) << setfill(b) << b;
	cout << setw(6) << setfill(a) << a << endl;
	cout << setw(28) << setfill(b) << b;
	cout << setw(4) << setfill(a) << a;
	cout << setw(7) << setfill(b) << b;
	cout << setw(4) << setfill(a) << a << endl;
	cout << setw(28) << setfill(b) << b;
	cout << setw(3) << setfill(a) << a;
	cout << setw(9) << setfill(b) << b;
	cout << setw(3) << setfill(a) << a << endl;
	cout << setw(29) << setfill(b) << b;
	cout << setw(1) << setfill(a) << a;
	cout << setw(11) << setfill(b) << b;
	cout << setw(1) << setfill(a) << a;
}

//zadanie7

//#include <iomanip>;
//#include <iostream>;
//using namespace std;
//
//
//void main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	float x1, x2, y1, y2, r;
//	cout << "Введите x1: "; cin >> x1;
//	cout << "Введите x2: "; cin >> x2;
//	cout << "Введите y1: "; cin >> y1;
//	cout << "Введите y2: "; cin >> y2;
//	x1 = x1 - x2;
//	y1 = y1 - y2;
//	r = sqrt(pow(x1, 2) + pow(y1, 2)); 
//	cout << "Расстояние = "  << r;
//}

//zadanie9_1

//#include <iostream>
//#include <iomanip>
//int main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	char c, pr; pr = ' ';
//	using namespace std;
//	cout << "Введите символ = "; cin >> c;
//	cout << endl;
//	cout << setw(2) << setfill(pr) << pr;
//	cout << setw(1) << setfill(c) << c << pr;
//	cout << setw(12) << setfill(pr) << pr;
//	cout << setw(1) << setfill(c) << c << pr;
//	cout << setw(10) << setfill(pr) << pr;
//	cout << setw(1) << setfill(c) << c << pr;
//	cout << setw(10) << setfill(pr) << pr;
//	cout << setw(1) << setfill(c) << c << endl;
//	cout << setw(1) << setfill(pr) << pr;
//	cout << setw(1) << setfill(c) << c << pr;
//	cout << setw(12) << setfill(pr) << pr;
//	cout << setw(3) << setfill(c) << c << pr;
//	cout << setw(10) << setfill(pr) << pr;
//	cout << setw(1) << setfill(c) << c << pr;
//	cout << setw(9) << setfill(pr) << pr;
//	cout << setw(1) << setfill(c) << c << endl;
//	cout << setw(7) << setfill(c) << c << pr;
//	cout << setw(6) << setfill(pr) << pr;
//	cout << setw(1) << setfill(c) << c << pr;
//	cout << setw(1) << setfill(c) << c << pr;
//	cout << setw(1) << setfill(c) << c << pr;
//	cout << setw(3) << setfill(pr) << pr;
//	cout << setw(8) << setfill(c) << c << pr;
//	cout << setw(6) << setfill(pr) << pr;
//	cout << setw(1) << setfill(c) << c << pr;
//	cout << setw(1) << setfill(c) << c << pr;
//	cout << setw(1) << setfill(c) << c << endl;
//	cout << setw(1) << setfill(pr) << pr;
//	cout << setw(1) << setfill(c) << c << pr;
//	cout << setw(13) << setfill(pr) << pr;
//	cout << setw(1) << setfill(c) << c << pr;
//	cout << setw(11) << setfill(pr) << pr;
//	cout << setw(1) << setfill(c) << c << pr;
//	cout << setw(8) << setfill(pr) << pr;
//	cout << setw(3) << setfill(c) << c << endl;
//	cout << setw(2) << setfill(pr) << pr;
//	cout << setw(1) << setfill(c) << c << pr;
//	cout << setw(12) << setfill(pr) << pr;
//	cout << setw(1) << setfill(c) << c << pr;
//	cout << setw(10) << setfill(pr) << pr;
//	cout << setw(1) << setfill(c) << c << pr;
//	cout << setw(10) << setfill(pr) << pr;
//	cout << setw(1) << setfill(c) << c << endl;
//}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
