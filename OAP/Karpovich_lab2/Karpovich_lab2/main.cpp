// Karpovich_lab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


//3 задание

//#include <iostream>
//void main()
//{
//	float x = 3, y;
//	y = x * x + sin(x);
//	std::cout << y;
//}

//4 задание

//#include <iostream>
//void main()
//{
//	double t, u, k = 4, a = 4.1, x = 5e-5;
//	t = 2 * tan(k) / a * log(abs(3 + x)) + exp(x);
//	u = sqrt(t + 1) * (sin(x) * cos(t));
//	std::cout << "t=" << t;
//	std::cout << "u=" << u;
//}

//5 задание

//#include <iostream>
//void main()
//{
//	double y = 0.956, a = 5 * pow(10, -6), t, u, s;
//	int n = 4;
//	t = 1 / sqrt(y) + 14 * a;
//	u = (t + 1) / (a + 2);
//	s = log((2 * n / 3) + exp(-n) / u);
//	std::cout << "t=" << t << std::endl;
//	std::cout << "u=" << u << std::endl;
//	std::cout << "s=" << s << std::endl;
//}

 //6 задание
//#include <iostream>
//void main()
//{
//	double y = 0.5, x = 2 * pow(10, -4), c = 1.4, z, u;
//	z = exp(c * x) / y + 3;
//	u = sqrt(pow(z, 3) - 0.1 * z);
//	std::cout << "z=" << z << std::endl;
//	std::cout << "u=" << u << std::endl;
//}

//dopa 1
//#include <iostream>
//int main()
//{
//	double r = 5e-7, x = 0.095, t, u;
//	int k = 6;
//		t = tan(x) + r * (1 - log(x));
//	    u = t / (pow(x, 3) + 1) / (1 - exp(k - 4));
//	std::cout << "t=" << t << std::endl;
//	std::cout << "u=" << u << std::endl;
//}

//dopa2
//#include <iostream>
//int main()
//{
//	double a = 1.75, b = 4.5e-4, y, r;
//	y = a * exp(-2*b) - sqrt(1 + a);
//	r = log(1 + 20 * b) / (1 + a);
//	std::cout << "y=" << y << std::endl;
//	std::cout << "r=" << r << std::endl;
//	
//}

//dopa3
#include <iostream>
using namespace std;
void main()
{
	int n = 2;
	float b = -0.12, x = 1.3e-4, z, y;
	z = 1 / (x - 1) + sin(x) - sqrt(n);
	y = (exp(-b) + 1) / 2 * z;
	cout << y;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
