#include<iostream>
#include<iomanip>   // them tinh nang setw()
#include"DanhMuc.h"
#include"TienIch.h"

using namespace std ; 


TheLoai::TheLoai() {
    ma = "" ; 
    ten = "" ; 
    moTa="" ; 
}

//TheLoai::TheLoai() : ma(""), ten(""), moTa("") {}

TheLoai::TheLoai(const string& ma1 , const string& ten1 ,const string& moTa1 ) {
    setMa(ma1) ; 
    setTen(ten1) ; 
    setMoTa(moTa1) ; 
}

bool TheLoai::setMa(const string& s) {
    string t = ChuanHoa(s);
    if (t.empty()) return false;             
    this->ma = t;
    return true;
}

bool TheLoai::setTen(const string& s) {
    string t = ChuanHoa(s);
    if (t.empty()) return false;
    this->ten = t;
    return true;
}

bool TheLoai::setMoTa(const string& s) {
    this->moTa = ChuanHoa(s);                       
    return true;
}

void TheLoai::nhap() {
    while (!setMa(Nhap::Chuoi("  Ma the loai   : ")))
        cout << "  !! Ma khong duoc rong.\n";
    while (!setTen(Nhap::Chuoi("  Ten the loai  : ")))
        cout << "  !! Ten khong duoc rong.\n";
    setMoTa(Nhap::Chuoi("  Mo ta         : ", true));  // true = cho phep rong
}

void TheLoai::inBang() {
    cout << " " << left  << setw(10) << "MA"
         << left  << setw(28) << "TEN THE LOAI"
         << left  << setw(40) << "MO TA" << "\n";
    cout << " " << string(78, '-') << "\n";
}

void TheLoai::xuatDong() const {
    cout << " " << left << setw(10) << CatBot(ma,   9) // rong 10 ,toi da 9 dong
         << left << setw(28) << CatBot(ten,  27)
         << left << setw(40) << CatBot(moTa, 39) << "\n";
}






