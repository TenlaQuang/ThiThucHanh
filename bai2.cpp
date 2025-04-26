#include <iostream>
using namespace std;

int main() {
    int n;

    while (true) {
        cout << "Nhap so luong phan tu n: ";
        cin >> n;

        if (cin.fail() || n <= 0) {
            cout << "Nhap lai n nhe!\n";
            cin.clear();
            cin.ignore(1000, '\n');
        } else {
            break;
        }
    }

    int a[1000];

    for (int i = 0; i < n; i++) {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }

    int max = 0;
    bool SoChiaHetCho3 = false;

    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0) {
            if (!SoChiaHetCho3 || a[i] > max) {
                max = a[i];
                SoChiaHetCho3 = true;
            }
        }
    }

    if (SoChiaHetCho3) {
    	if(max == 0){
    		cout<<"Ko co so chia het cho 3"  << endl;
        }else{
			cout<< "So lon nhat chia het cho 3 la: " << max << endl;
        }
    } else {
        cout << "Ko co so chia het cho 3" << endl;
    }

    return 0;
}

