#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    int a[100];
    set<int> tapPhanBiet;

    do {
        cout << "Nhap so phan tu n (>0): ";
        cin >> n;
    } while (n <= 0);

    for (int i = 0; i < n; ++i) {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
        tapPhanBiet.insert(a[i]); 
    }

    cout << "So luong gia tri phan biet trong mang la: " << tapPhanBiet.size() << endl;

    return 0;
}

