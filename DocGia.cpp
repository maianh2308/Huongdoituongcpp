#include "DocGia.h"

void CDocGia::Input(){
    fflush(stdin);
    cout << "\nNhap Ho Ten:";
    getline(cin,hoten);

    fflush(stdin);
    cout << "\nNhap Ngay Lap The:";
    getline(cin, ngaylapthe);
    cout<< "\nNhap So Thang co Hieu Luc:";
    cin >> sothangcohieuluc;
}
void CDocGia::Output(){
    cout << "\nHo Ten Doc Gia:"<< hoten;
    cout << "\nNgay Lap The:"<< ngaylapthe;
    cout << "\nSo Thang Co Hieu Luc:"<< sothangcohieuluc;
    
}
	
