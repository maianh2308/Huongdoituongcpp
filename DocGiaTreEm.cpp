#include "DocGiaTreEm.h"

#include <iostream>

using namespace std;
void CDocGiaTreEm::InputTE(){
    CDocGia::Input();
    fflush(stdin);
    cout << "\nNhap Ho Ten Nguoi Dai Dien:";
    getline(cin, nguoidaidien);
}
void CDocGiaTreEm::OutputTE(){
    CDocGia::Output();
    cout<< "\nNguoi Dai Dien:"<< nguoidaidien;
}
int CDocGiaTreEm::tinhtienlamthe(){
    return sothangcohieuluc*5000;
}