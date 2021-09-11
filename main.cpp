#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
using namespace std;
/*
struct node{
    int data;
    struct node *pNext;
};
typedef struct node Node;
struct singleList{
    Node *pHead;
    Node *pTail;
};
typedef struct singleList List;
void khoiTao(List &l){
    l.pHead=l.pHead=NULL;
}
Node *taoNode(int x){
    Node *p=new Node;
    p->data=x;
    p->pNext=NULL;
    return p;
}
void themVaoDau(List &l,Node *p){
    if(l.pHead==NULL){
        l.pHead=l.pTail=p;
    }else{
        p->pNext=l.pHead;
        l.pHead=p;
    }
}
void themVaoCuoi(List &l,Node *p){
    if(l.pHead==NULL){
        l.pHead=l.pTail=p;
    }else{
        l.pTail->pNext=p;
        l.pTail=p;
    }
}
void inList(List l){
    for(Node *i=l.pHead;i!=NULL;i=i->pNext){
        printf("%5d", i->data);
    }
}
void themNode_p_vaosauNode_q(List &l, Node *p){
    int b;
    printf("\nNhap vao Node truoc Node can them:");
    scanf("%d",&b);
    Node *q=taoNode(b);
    if(q->data==l.pHead->data&&l.pHead->pNext==NULL){
    themVaoCuoi(l,p);
    }else{
    for(Node *i=l.pHead;i!=NULL;i=i->pNext){
        if(q->data==i->data){
            Node *h=taoNode(p->data);
            Node *g=i->pNext;
            h->pNext=g;
            i->pNext=h;
        }
    }}
}
void themNOde_p_vaotruocNode_q(List &l,Node *p){
    int b;
    printf("\nNhap vao Node sau Node can them:");
    scanf("%d",&b);
    Node *q=taoNode(b);
    Node *g=new Node;
    if(q->data==l.pHead->data&&l.pHead->pNext==NULL){
        themVaoDau(l,p);
    }else{
        for(Node *k=l.pHead;k!=NULL;k=k->pNext){
            if(q->data==k->data){
                Node *h=taoNode(p->data);
                h->pNext=k;
                g->pNext=h;
            }
            g=k;
        }
    }
}
void themNode_p_vaoViTriBatKi(List &l,Node *p,int vt, int n){
    Node *g=new Node;
    if(l.pHead==NULL||vt==1){
        themVaoDau(l,p);
    }
    else if(vt==n+1){
        themVaoCuoi(l,p);
    }else{
        int dem=0;
        for(Node *i=l.pHead;i!=NULL;i=i->pNext){
            dem++;
            if(dem==vt){
                Node *h=taoNode(p->data);
                h->pNext=i;
                g->pNext=h;
                break;
            }
            g=i;
        }
    }
}
void xoaDau(List &l){
    if(l.pHead==NULL){
        return;
    }else{
        Node *p=l.pHead;
        l.pHead=l.pHead->pNext;
        delete p;
    }
}
void xoaCuoi(List &l){
    if(l.pHead==NULL){
        return;
    }else{
       for(Node *k=l.pHead;k!=NULL;k=k->pNext){
            if(k->pNext==l.pTail){
                delete l.pTail;
                k->pNext=NULL;
                l.pTail=k;
            }
       }
    }
}
void xoaSau(List &l, Node *p){
    for(Node *k=l.pHead;k!=NULL;k=k->pNext){
        if(k->data==p->data){
            Node *g=k->pNext;
            k->pNext=g->pNext;
            delete g;
            return;
        }
    }
}
void xoaNodeBatKi(List &l,Node *p){
    Node *g=new Node;
    for(Node *k=l.pHead;k!=NULL;k=k->pNext){
        if(p->data==k->data){
            g->pNext=k->pNext;
            delete k;
            return;
        }
        g=k;
    }
}
void giaiPhongBoNho(List &l){
    Node *k=NULL;
    while(l.pHead!=NULL){
        k=l.pHead;
        l.pHead=l.pHead->pNext;
        delete k;
        }
}
int main(){
    List l;
    khoiTao(l);
    while(1){
        system("cls");
        printf("\n===========MENU==========\n");
        printf("\n1. Tao Danh Sach");
        printf("\n2.Hien Thi Danh Sach");
        printf("\n3.Them 1 Phan Tu");
        printf("\n4.Them 1 phan tu vao phia truoc");
        printf("\n5.Them 1 phan tu vao vi tri bat ki");
        printf("\n6.Xoa Node dau");
        printf("\n7.Xoa Node cuoi");
        printf("\n8.Xoa Node sau");
        printf("\n9.Xoa Node bat ki");
        printf("\n10.Ket Thuc");
        printf("\n===========END==========\n");
        printf("\nNhap lua chon:");
        int chon;
        scanf("%d", &chon);
        system("cls");
        switch(chon){
            case 1:{
                printf("\nBan da chon tao danh sach");
                int n;
                printf("\nNhap vao so phan tu cua danh sach:");
                scanf("%d", &n);
                for(int i=0;i<n;i++){
                    int x;
                    printf("\nNhap vao phan tu thu %d:", i+1);
                    scanf("%d", &x);
                    Node *p=taoNode(x);
                    themVaoCuoi(l,p);
                }
                break;
            }
            case 2:{
                printf("\nBan da chon hien thi danh sach!\n");
                inList(l);
                break;
            }
            case 3:{
                printf("\nBan da chon them 1 phan tu\n");
                int a;
                printf("\nNhap vao node p:");
                scanf("%d", &a);
                Node *p=taoNode(a);
                themNode_p_vaosauNode_q(l,p);
                break;
            }
            case 4:{
                int a;
                printf("\nNhap vao node p:");
                scanf("%d", &a);
                Node *p=taoNode(a);
                themNOde_p_vaotruocNode_q(l,p);
                break;
            }
            case 5:{
                int n=0;
                for(Node *i=l.pHead;i!=NULL;i=i->pNext){
                    n++;}
                int vt;
                do{printf("\nNhap vao vi tri muon them:");
                scanf("%d", &vt);
                }while(vt<1||vt>n+1);
                int a;
                printf("\nNhap vao gia tri phan tu:");
                scanf("%d", &a);
                Node *p=taoNode(a);
                themNode_p_vaoViTriBatKi(l,p,vt,n);
                break;
            }
            case 6:{
                xoaDau(l);
                break;
            }
            case 7:{
                xoaCuoi(l);
                break;
            }
            case 8:{
                int a;
                printf("\nNhap vao Node truoc node can xoa:");
                scanf("%d", &a);
                Node *p=taoNode(a);
                xoaSau(l,p);
                break;
            }
            case 9:{
                int a;
                printf("\nNhap vao node can xoa:");
                scanf("%d", &a);
                Node *p=taoNode(a);
                xoaNodeBatKi(l,p);
                break;
            }
            case 10:{
                printf("\nBYE!!!!");
                break;
            }
            default:{
                printf("\nChi nhap tu 1-10");
            }
        }
        printf("\nBam phim bat ki de ve MENU");
        getch();
    }
    giaiPhongBoNho(l);
}
struct node{
    int data;
    struct node *pLeft;
    struct node *pRight;
};
typedef struct node Node;
typedef Node* Tree;
void khoiTaoCay(Tree &t){
    t=NULL;
}
void themVaoCay(Tree &t,int x){
    if(t==NULL){
        Node *p=new Node;
        p->data=x;
        p->pLeft=NULL;
        p->pRight=NULL;
        t=p;
    }else{
        if(t->data>x){
            themVaoCay(t->pLeft,x);
        }else if(t->data<x){
            themVaoCay(t->pRight,x);
        }
    }
}
void hienThi_NLR(Tree t){
    if(t!=NULL){
        printf("%d ",t->data);
        hienThi_NLR(t->pLeft);
        hienThi_NLR(t->pRight);
    }
}
void hienThi_NRL(Tree t){
    if(t!=NULL){
        printf("%d ",t->data);
        hienThi_NRL(t->pRight);
        hienThi_NRL(t->pLeft);
    }
}
void hienThi_LNR(Tree t){
    if(t!=NULL){
        hienThi_LNR(t->pLeft);
        printf("%d ",t->data);
        hienThi_LNR(t->pRight);
    }
}
bool kiemTraSNT(int x){
    if(x<2){
        return false;
    }else{
        if(x==2){
            return true;
        }else{
            for(int i=2;i<x;i++){
                if(x%i==0){
                    return false;
                }
                return true;
            }
        }
    }
}
void demSNT(Tree t, int &dem){
    if(t!=NULL){
        if(kiemTraSNT(t->data)==true){
            dem++;
        }
        demSNT(t->pLeft, dem);
        demSNT(t->pRight, dem);
    }
}
int main(){
    Tree t;
    khoiTaoCay(t);
    while(1){
        system("cls");
        printf("\n=============MENU============");
        printf("\n1. Nhap vao cay nhi phan!");
        printf("\n2.Hien thi cay nhi phan kieu NLR!");
        printf("\n3.Hien thi cay nhi phan kieu NRL");
        printf("\n4.Hien thi cay nhi phan kieu LNR");
        printf("\n5.Hien thi so nguyen to trong cay");
        printf("\n6.Ket thuc!!!");
        printf("\nNhap vao lua chon:");
        int a;
        scanf("%d", &a);
        system("cls");
        switch(a){
            case 1:{
                printf("\nBan da chon nhap cay nhi phan!");
                int b;
                printf("\nNhap vao so luong phan tu:");
                scanf("%d", &b);
                for(int i=0;i<b;i++){
                    printf("\nNhap vao phan tu thu %d:", i+1);
                    int x;
                    scanf("%d", &x);
                    themVaoCay(t,x);
                }
                break;
            }
            case 2:{
                printf("\nBan da chon hien thi cay:");
                hienThi_NLR(t);
                break;
            }
            case 3:{
                printf("\nBan da chon hien thi cay:");
                hienThi_NRL(t);
                break;
            }
            case 4:{
                printf("\nBan da chon hien thi cay:");
                hienThi_LNR(t);
                break;
            }
            case 5:{
                int dem=0;
                printf("\nSo nguyen to trong cay la:");
                demSNT(t, dem);
                printf("%d", dem);
                break;
            }
            case 6:{
                printf("\nBYE!!!");
                break;
            }
            default:{
                printf("\nChi nhap tu 1->6");
                break;
            }
        }
        printf("\nNhan phim bat ki de ve MENU:");
        getch();
    }
}*//*
class NhanVien{
protected:
    string hoten;
    string tuoi;
    string SDT;
    string gioitinh;
    string diachi;
    float chieucao;
    float cannang;
public:
    void NhapThongTin(){
        cout<< "\nNhap ho ten:";
        getline(cin, hoten);
        fflush(stdin);
        cout<< "\nNhap tuoi:";
        getline(cin, tuoi);
        fflush(stdin);
        cout<< "\nNhap so dien thoai:";
        getline(cin, SDT);
        fflush(stdin);
        cout<< "\nNhap gioi tinh:";
        getline(cin, gioitinh);
        fflush(stdin);
        cout<< "\nNhap dia chi:";
        getline(cin, diachi);
        fflush(stdin);
        cout<< "\nNhap chieu cao:";
        cin >>chieucao;
        cout << "\nNhap can nang:";
        cin >>cannang;
    }
    void XuatThongTin(){
        cout << "\nHo Ten:"<<hoten;
        cout << "\nTuoi:"<<tuoi;
        cout << "\nSDT:"<<SDT;
        cout << "\nGioi Tinh:"<<gioitinh;
        cout << "\nDia Chi:"<<diachi;
        cout << "\nChieu Cao:"<<chieucao;
        cout << "\nCan nang:"<<cannang;
    }
};
class nhanVienSuaOngNuoc:public NhanVien{
private:
    float sogiosua;
public:
    void nhapNhanVienSuaOngNuoc(){
        NhanVien::NhapThongTin();
        cout << "\nNhap so gio sua:";
        cin>> sogiosua;
    }
    void xuatDuLieuNhanVienOngNuoc(){
        NhanVien::XuatThongTin();
        cout << "\nSo gio sua:"<<sogiosua;
    }
    float tienluong(){
        return size_t(sogiosua*50000);
    }
};
class nhanVienGiaoHang:public NhanVien{
private:
    int sohanggiao;
public:
    void nhapNhanVienGiaoHang(){
        NhanVien::NhapThongTin();
        cout << "\nNhap vao so hang da giao:";
        cin >> sohanggiao;
    }
    void xuatNhanVienGiaoHang(){
        NhanVien::XuatThongTin();
        cout << "\nSo Hang Giao :"<<sohanggiao;
    }
    float tienluong(){
        return size_t(sohanggiao*33500);
    }
};
class NhanVienXeOm:public NhanVien{
private:
    float sokm;
public :
    void nhapNhanVienXeOm(){
        NhanVien::NhapThongTin();
        cout << "\nNhap So Km:";
        cin >>sokm;
    }
    void XuatNhanVienXeOm(){
        NhanVien::XuatThongTin();
        cout<< "\nSo Km:"<<sokm;
    }
    float tienluong(){
        return size_t(sokm*10000);
    }
};
void Menu(nhanVienSuaOngNuoc *nvsuaongnuoc[],nhanVienGiaoHang *nvgiaohang[],NhanVienXeOm *xeom[],int n, int m, int l){
    int luachon;
    while(true){
    system("cls");
    cout << "\n=======CHUONG TRINH QUAN LI=========";
    cout << "\n1. Nhap thong tin nhan vien SUA ONG NUOC";
    cout << "\n2, Nhap thong tin nhan vien giao hang";
    cout << "\n3. Nhap thong tin xe om cong nghe";
    cout << "\n4. HIEN THI thong tin nhan vien SUA ONG NUOC";
    cout << "\n5, HIEN THI thong tin nhan vien giao hang";
    cout << "\n6. HIEN THI thong tin xe om cong nghe";
    cout << "\n7. TONG LUONG HANG THANG";
    cout << "\n8. KET THUC";
    cout << "\n=======================================";
    cout << "\nNhap lua chon:";
    cin >> luachon;
    fflush(stdin);
    system ("cls");
    if(luachon<1||luachon>8){
        cout << "\nNHAP SAI.VUI LONG NHAP LAI";
    }
    else if(luachon==1){
        nhanVienSuaOngNuoc *nv= new nhanVienSuaOngNuoc();
        cout << "\nNHAP THONG TIN NHAN VIEN SUA ONG NUOC";
        nv->nhapNhanVienSuaOngNuoc();
        nvsuaongnuoc[n]=nv;
        n++;
    }
    else if(luachon==2){
        nhanVienGiaoHang *nv= new nhanVienGiaoHang();
        cout << "\nNHAP THONG TIN NHAN VIEN GIAO HANG";
        nv->nhapNhanVienGiaoHang();
        nvgiaohang[m]=nv;
        m++;
    }
    else if(luachon==3){
        NhanVienXeOm *nv= new NhanVienXeOm();
        cout << "\nNHAP THONG TIN XE OM CONG NGHE";
        nv->nhapNhanVienXeOm();
        xeom[l]=nv;
        l++;
    }
    else if(luachon==4){
        cout << "THONG TIN XE SUA ONG NUOC!";
        for (int i=0;i<n;i++){
        cout << "\nNhan vien thu "<<i+1;
        nvsuaongnuoc[i]->xuatDuLieuNhanVienOngNuoc();
        cout<< "\nTien Luong:"<< size_t(nvsuaongnuoc[i]->tienluong());
        }
        system("pause");
    }
    else if(luachon==5){
        cout << "THONG TIN XE GIAO HANG!";
        for (int i=0;i<m;i++){
        cout << "\nNhan vien thu "<<i+1;
        nvgiaohang[i]->xuatNhanVienGiaoHang();
        cout<< "\nTien Luong:"<<size_t(nvgiaohang[i]->tienluong());
        }
        system("pause");
        }
    else if(luachon==6){
        cout << "THONG TIN XE OM CONG NGHE!";
        for (int i=0;i<l;i++){
        cout << "\nNhan vien thu "<<i+1;
        xeom[i]->XuatNhanVienXeOm();
        cout<< "\nTien Luong:"<<size_t(xeom[i]->tienluong());
        }
        system("pause");
    }
    else if (luachon==7){
            float a=0,b=0,c=0,d=0;
            for(int i=0;i<n;i++){
                a=a+nvsuaongnuoc[i]->tienluong();
            }
            for(int i=0;i<m;i++){
                b=b+ nvgiaohang[i]->tienluong();
            }
            for(int i=0;i<l;i++){
                c=c+ xeom[i]->tienluong();
            }
            d=(a+b+c)*30;
            cout << "\nTong Luong Hang Thang :"<<size_t(d);
            system("pause");
    }
    else if(luachon==8){
        break;
    }
}
}
int main(){
    nhanVienSuaOngNuoc *nvsuaongnuoc[100];
    nhanVienGiaoHang *nvgiaohang[100];
    NhanVienXeOm *xeom[100];
    int n=0, m=0, l=0;
    Menu(nvsuaongnuoc,nvgiaohang,xeom,n,m,l);
    for(int i=0;i<n;i++){
        delete nvsuaongnuoc[i];
    }
    for(int i=0;i<m;i++){
        delete nvgiaohang[i];
    }
    for(int i=0;i<l;i++){
        delete xeom[i];
    }
}*/
class XE{
protected:
    string HoTenNguoiThue;
    float SoGioThue;
public:
    void NhapThongTin(){
        while (getchar()!='\n');
        cout << "\nNhap ho ten nguoi thue:";
        getline(cin, HoTenNguoiThue);
        cout << "\nNhap so gio thue:";
        cin >> SoGioThue;
    }
    void XuatThongTin(){
        cout << "\nHo ten nguoi thue :"<<HoTenNguoiThue;
        cout << "\nSo gio thue:"<<SoGioThue;
    }
};
class XEDAP:public XE{
private:
public:
    float TinhTienThueXe(){
        return size_t(10000+ ((SoGioThue-1)*8000));
    }
};
class XEMAY:public XE{
private:
    int LoaiXe;
    string BienSo;
public:
    void NhapTHongTinXeMay(){
        XE::NhapThongTin();
        cout << "\nNhap loai xe can thue(100-250):";
        cin >>LoaiXe;
        while(getchar()!='\n');
        cout << "\nNhap vao bien so xe:";
        getline(cin, BienSo);
    }
    void XuatThongTinXeMay(){
        XE::XuatThongTin();
        cout<< "\nLoai xe:"<<LoaiXe;
        cout<< "\nBien so xe:"<<BienSo;
    }
    float TinhTienThueXe(){
        int s=0;
        if(LoaiXe==100){
            s=150000;
        }else {
            s=200000;
        }
        return size_t(s + ((SoGioThue-1)*100000));
    }
};
void Menu(XEDAP ds_xedap[], XEMAY ds_xemay[], int n, int m){
    int luachon;
    while(true){
        system("cls");
        cout<< "\n======QUAN LI NHAN VIEN ==========";
        cout<< "\n1.NHAP THONG TIN XE DAP";
        cout<< "\n2.NHAP THONG TIN XE MAY";
        cout<< "\n3.HIEN THI THONG TIN XE DAP";
        cout<< "\n4.HIEN THI THONG TIN XE DAP";
        cout << "\n5.TONG TIEN THUE XE HANG THANG";
        cout << "\n==================================";
        cout << "\nNhap lua chon:";
        cin >> luachon;
        fflush(stdin);
        system("cls");
        if(luachon<1||luachon>5){
            cout << "\nNhap sai cu phap! Moi nhap lai!";
        }
        else if(luachon==1){
            XEDAP nt;
            cout << "\nNHAP THONG TIN NGUOI THUE XE DAP";
            nt.NhapThongTin();
            ds_xedap[n]=nt;
            n++;
        }
        else if(luachon==2){
            XEMAY nt;
            cout << "\nNHAP THONG TIN NGUOI THUE XE MAY";
            nt.NhapTHongTinXeMay();
            ds_xemay[m]=nt;
            m++;
        }
        else if(luachon==3){
            cout<< "\n======= THUE XE DAP =======";
            for(int i=0;i<n;i++){
                cout << "\nTHONG TIN NGUOI THU "<<i+1;
                ds_xedap[i].XuatThongTin();
                cout << "\nTien thue xe:"<<size_t(ds_xedap[i].TinhTienThueXe());
            }
            system("pause");
        }
        else if(luachon==4){
            cout<< "\n======= THUE XE MAY =======";
            for(int i=0;i<m;i++){
                cout << "\nTHONG TIN NGUOI THU "<<i+1;
                ds_xemay[i].XuatThongTinXeMay();
                cout << "\nTien thue xe:"<<size_t(ds_xemay[i].TinhTienThueXe());
            }
            system("pause");
        }
        else if(luachon==5){
            float a=0,b=0,c=0;
            for(int i=0;i<n;i++){
                a=a+ ds_xedap[i].TinhTienThueXe();
            }
            for(int i=0;i<m;i++){
                b=b+ ds_xemay[i].TinhTienThueXe();
            }
            c= size_t(a+b)*30;
            cout<< "\nTien thue xe hang thang :"<<size_t(c);
            system("pause");
        }
}
}
int main(){
    XEDAP ds_xedap[100];
    int n=0;
    XEMAY ds_xemay[100];
    int m=0;
    Menu(ds_xedap,ds_xemay,n,m);
}
/*
class DocGia{
protected:
    string hoten;
    string ngaylapthe;
    int thangcohieuluc;
public:
    void NhapThongTin(){
        fflush(stdin);
        cout << "\nNhap Ho Ten:";
        getline(cin, hoten);
        fflush(stdin);
        cout<< "\nNhap Ngay Lap The:";
        getline(cin, ngaylapthe);
        fflush(stdin);
        cout<< "\nNhap So Thang Co Hieu Luc:";
        cin >> thangcohieuluc;
        fflush(stdin);
    }
    void XuatThongTin(){
        cout << "\nHo Ten:"<<hoten;
        cout << "\nNgay Lap The:"<< ngaylapthe;
        cout << "\nSo Thang Co Hieu Luc:"<<thangcohieuluc;
    }
};
class TreEm:public DocGia{
private:
    string hotennguoidaidien;
public:
    void NhapTreEm(){
        DocGia::NhapThongTin();
        cout << "\nNhap Ho Ten Nguoi Dai Dien:";
        getline(cin,hotennguoidaidien);
        fflush(stdin);
    }
    float tienlamthe(){
        return thangcohieuluc*5000;
    }
    void XuatTreEm(){
        DocGia::XuatThongTin();
        cout<< "\nHo Ten Nguoi Dai Dien:"<<hotennguoidaidien;
        cout<< "\nTien Lam The:"<<tienlamthe();
    }
};
class NguoiLon:public DocGia{
private:
    string soCMND;
public:
    void NhapNguoiLon(){
        DocGia::NhapThongTin();
        cout<< "\nNhap So CMND:";
        getline(cin,soCMND);
        fflush(stdin);
    }
    float tienlamthe(){
        return thangcohieuluc*10000;
    }
    void XuatNguoiLon(){
        DocGia::XuatThongTin();
        cout<< "\nSo CMND:"<<soCMND;
        cout << "\nTien Lam The:"<<tienlamthe();
    }
};
void Menu(TreEm *ds_treEm[],NguoiLon *ds_nguoiLon[], int n, int m){
    int luachon;
    while(true){
        system("cls");
        cout<< "\n===================MENU==================";
        cout << "\n1.NHAP THONG TIN DOC GIA TRE EM";
        cout << "\n2.NHAP THONG TIN DOC GIA NGUOI LON";
        cout << "\n3.HIEN THI THONG TIN DOC GIA TRE EM";
        cout << "\n4.HIEN THI THONG TIN DOC GIA NGUOI LON";
        cout << "\n5.TONG TIEN LAM THE";
        cout << "\n0.KET THUC";
        cout << "\nNHAP LUA CHON:";
        cin>> luachon;
        system("cls");
        if(luachon<0||luachon>5){
            cout<< "\nNHAP SAI. VUI LONG NHAP LAI";
        }
        else if(luachon==0){
            for(int i=0;i<n;i++){
                delete ds_treEm[i];
            }
            for(int i=0;i<m;i++){
                delete ds_nguoiLon[i];
            }
            break;
        }
        else if(luachon==1){
            TreEm *a=new TreEm();
            cout<< "\nNHAP THONG TIN";
            a->NhapTreEm();
            ds_treEm[n]=a;
            n++;
            }
        else if(luachon==2){
            NguoiLon *a=new NguoiLon();
            a->NhapNguoiLon();
            ds_nguoiLon[m]=a;
            m++;
        }
        else if(luachon==3){
            for(int i=0;i<n;i++){
                cout<< "\nNGUOI THUE THU "<<i+1;
                ds_treEm[i]->XuatTreEm();
            }
            system("pause");
        }
        else if(luachon==4){
            for(int i=0;i<m;i++){
                cout<< "\nNGUOI THUE THU "<<i+1;
                ds_nguoiLon[i]->XuatNguoiLon();
            }
            system("pause");
        }
        else if(luachon==5){
            float a=0,b=0;
            for(int i=0;i<n;i++){
                a=a+ds_treEm[i]->tienlamthe();
            }
            for(int i=0;i<n;i++){
                b=b+ds_nguoiLon[i]->tienlamthe();
            }
            cout << "\nTONG TIEN LAM THE:"<< size_t(a+b);
            system("pause");
        }
    }
}

int main(){
    TreEm *ds_treEm[100];
    NguoiLon *ds_nguoiLon[100];
    int n=0,m=0;
    Menu(ds_treEm,ds_nguoiLon,n,m);
}*/

