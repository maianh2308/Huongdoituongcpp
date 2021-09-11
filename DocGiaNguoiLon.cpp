#include <DocGiaNguoiLon.h>
#include <iostream>

using namespace std;

void DocGiaNguoiLon::InputNL(){
    CDocGia::Input();
    fflush(stdin);
    cout << "\nNhap CMND:";
    getline(cin, CMND);
}
Void DocGiaNguoiLon::OutputNL(){
    CDocGia::Output();
    cout << "\nCMND:"<< CMND;
}
int DocGiaNguoiLon::tinhtienluong(){
    return sothangcohieuluc*10000;
}