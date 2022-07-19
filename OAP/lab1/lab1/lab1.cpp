#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    int n = 0; 
    int k1, k2, k3 = 0; 
    cout << "Введите 3 трехзначное число" << endl;
    cin >> n; 
    cout << endl;
    k1 = n / 100; 
    k2 = (n / 10) % 10; 
    k3 = n % 10; 
    if (k1 == 0 || k1 == 9 || k2 == 0 || k2 == 9 || k3 == 0 || k3 == 9) { 
         cout << "Da" << endl; 
    }
    else { 
        cout << "Net" << endl; 
    }
    return 0;
}