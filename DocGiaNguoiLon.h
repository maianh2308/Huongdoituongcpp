#pragma once
#include <string>
#include <iostream>

using namespace std;
#include <DocGia.h>

class DocGiaNguoiLon
{
private:
    string CMND;
public:
    void InputNL();
    void OutputNL();
    int tinhtienluong();
};

