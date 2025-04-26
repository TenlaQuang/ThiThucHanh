#include <iostream>
using namespace std;
struct SinhVien {
    string ten;
    float toan, ly, hoa;
    float diemTB;
};
// hàm này là hàm dùng de nhâp diêm tuong ung voi mon, sau dó kiem tra va return vê diem 
float nhapDiem(string mon) {
    float diem;
    do {
        cout << "Nhap diem " << mon << ": ";
        cin >> diem;
        if (diem < 0 || diem > 10 || cin.fail()) {
            cout << "Diem khong hop le\n";
            cin.clear();
            cin.ignore(1000, '\n');
        }
    } while (diem < 0 || diem > 10);
    return diem;
}
int main(){
	int n;
	do{
		cout<<"Nhap so luong sinh vien:";
		cin>>n;
		if (cin.fail() || n<=0){
			cout<<"Nhap lai so luong";
            cin.clear();
            cin.ignore(1000, '\n');
		}
	}while(n<=0);
	
	SinhVien sv[1000];
	
	for (int i = 0; i< n; ++i){
		cout << "\nNhap thong tin sinh vien " << i + 1 << ":\n";
        cin.ignore(); 
        cout << "Ten: ";
        getline(cin, sv[i].ten);
        sv[i].toan = nhapDiem("Toan"); //goi ham 
        sv[i].ly = nhapDiem("Ly");
        sv[i].hoa = nhapDiem("Hoa");
        sv[i].diemTB = (sv[i].toan + sv[i].ly + sv[i].hoa) / 3;
	}
	
	cout<< "\nDanh sach sinh vien co diem trung bình >=8:\n";
	bool SVG = false; // svg là sinh viên gioi :)
	for (int i =0; i<n; ++i){
		if (sv[i].diemTB >=8.0){
			cout<<"- Ten: " << sv[i].ten << ". Diem TB: " << sv[i].diemTB <<endl;
			SVG=true;
		}
	}
    if (!SVG) {
        cout << "- Khong co.\n";
    }
    return 0;
}

