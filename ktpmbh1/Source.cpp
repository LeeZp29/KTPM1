#include <iostream>
#include <cmath> 
using namespace std;


bool kiemTraSoNguyenTo(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

//TUYEN LAM
bool kiemTraNamNhuan(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    }
    return false;
}
int main() {
    int luaChon;
    int n;

    do {

        cout << "===== MENU =====\n";
        cout << "1. Kiem tra so nguyen to\n";
        cout << "2. Kiem tra nam nhuan\n";
        cout << "0. Thoat\n";
        cout << "Nhap lua chon: ";
        cin >> luaChon;

        switch (luaChon) {
        case 1: {

            cout << "Nhap vao mot so nguyen duong: ";
            cin >> n;

            if (kiemTraSoNguyenTo(n)) {
                cout << n << " la so nguyen to.\n";
            }
            else {
                cout << n << " khong phai la so nguyen to.\n";
            }
            break;
        }

        case 2:
            cout << "Nhap mot nam: ";
            cin >> n;
            if (kiemTraNamNhuan(n)) cout << "Nam nhuan";
            else cout << "Nam khong nhuan";
            cout << ".\n";
            break;

        case 0:
            cout << "Thoat chuong trinh.\n";
            break;

        default:
            cout << "Lua chon khong hop le! Vui long chon lai.\n";
            break;
        }

    } while (luaChon != 0);

    return 0;
}