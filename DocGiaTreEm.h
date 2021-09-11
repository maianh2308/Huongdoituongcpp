#pragma once
#include <DocGia.h>
#include <string>
#include <iostream>

using namespace std;

class CDocGiaTreEm:public CDocGia
{
private:
    string nguoidaidien;
public:
    void InputTE();
    void OutputTE();
    int tinhtienlamthe();
};


