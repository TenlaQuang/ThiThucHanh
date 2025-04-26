#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 1 || n == 2)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    do {
        cout << "Nhap n (1 <= n <= 30): ";
        cin >> n;
        if (cin.fail() || n <= 0 || n > 30) {
            cout << "Gia tri khong hop le. Vui long nhap lai!\n";
            cin.clear();
            cin.ignore(1000, '\n');
        }
    } while (n <= 0 || n > 30);

    cout << "Day Fibonacci tu F(1) den F(" << n << "): ";
    for (int i = 1; i <= n; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}

