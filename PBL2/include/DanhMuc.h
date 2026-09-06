#ifndef DANHMUC_H
#define DANHMUC_H

#include<iostream> 
#include<string>

using namespace std ; 



class TheLoai {

    protected :

        string ma ; 
        string ten ; 
        string moTa ; 

    public : 

        TheLoai() ; 
        TheLoai( const string& ma , const string& ten ,  const string& moTa) ; 
        // string ma : ton bo nho 
        // string& ma : khong truyen dc "abcccc" , khong lam thay doi gia tri goc
        // const string& ma : toi uu : chi doc khong lam thay doi gia tri goc

        string getMa()      const   { return ma ;}  
        string getTen()     const   {return ten ; } 
        string getMoTa()    const   { return moTa ; }

        bool setMoTa   (const string& moTa) ;
        bool setMa     ( const string& ma ) ;
        bool setTen    ( const string& ten) ;

        void nhap() ; 
        void xuatDong() const ; 
        static void inBang() ; 

};

#endif