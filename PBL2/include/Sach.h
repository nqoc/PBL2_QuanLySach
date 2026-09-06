#ifndef SACH_H
#define SACH_H

#include<iostream>
#include<string>

using namespace std ; 


class Sach {

    protected :
        string maSach ; 
        string tenSach ; 
        string maTacGia ; 
        string maTheLoai ; 
        string maNXB ; 
        int namXuatBan ;     
        double giaNhap ; 
        double giaBan ; 
        int soLuongTon ; 
        string viTriKe ; 
        string moTa ; 
// ctrl D  : xoa dong bo 
// ctrl Click : them click
// string s : khi duoc goi thi cap phat rat nang khong giong int a , double b 
        
    public : 
        static const int NAM_MIN ;          
        static const int NAM_MAX ;

        Sach() ;
        Sach(   const string& maSach , 
                const string& tenSach , 
                const string& maTacGia ,
                const string& maTheLoai ,
                const string& maNXB ,
                int namXuatBan ,
                double giaNhap , 
                double giaBan , 
                int soLuongTon ,
                const string& viTriKe ,
                const string& moTa 
        );
        
        
    


};














#endif